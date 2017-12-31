#include <Arduino.h>
#include "ILineDriver.h"
#include "FlipDotMatrixDisplay.h"
#include "MiniBitmap.h"

template<int w, int h>
FlipDotMatrixDisplay<w, h>::FlipDotMatrixDisplay(ILineDriver& rowDriver, ILineDriver& colDriver) :
    rowDriver(rowDriver),
    colDriver(colDriver),
    useBuffer(false)
{
}

template<int w, int h>
void FlipDotMatrixDisplay<w, h>::Reset()
{
    for (uint8_t i = 0; i < (w * h + 7) / 8; i++)
    {
        buffer[i] = 0xff;
    }
    for (uint8_t col = 0; col < w; col++)
    {
        for (uint8_t row = 0; row < h; row++)
        {
            Dot(col, row, false);
        }
    }
}

template<int w, int h>
void FlipDotMatrixDisplay<w, h>::Dot(uint8_t col, uint8_t row, bool set)
{
    if (col < w && row < h)
    {
        if (Update(col, row, set) || !useBuffer)
        {
            SetDot(col, row, set);
        }
    }
}

template<int w, int h>
void FlipDotMatrixDisplay<w, h>::SetDot(uint8_t col, uint8_t row, bool set)
{
    rowDriver.EnableLine(row, set);
    colDriver.EnableLine(col, !set);
    delay(1);
    colDriver.DisableLines();
    rowDriver.DisableLines();
}

template<int w, int h>
void FlipDotMatrixDisplay<w, h>::DotColumn(uint8_t column, uint8_t row, uint8_t pattern, uint8_t bitCount)
{
    for (uint8_t i = 0; i < bitCount; i++)
    {
        uint8_t bit = (1 << i);
        Dot(column, row + i, (pattern & bit) ? true : false);
    }
}

template<int width, int height>
bool FlipDotMatrixDisplay<width, height>::Update(uint8_t col, uint8_t row, bool newValue)
{
    uint16_t linearDotPosition = row * width + col;
    uint16_t byteAddress = linearDotPosition / 8;
    uint8_t bitAddress = linearDotPosition - (8 * byteAddress);
    uint8_t bit = 1 << bitAddress;

    uint8_t& bufferReference = buffer[byteAddress];
    bool bufferedValue = (bufferReference & bit) ? true : false;
    bool needUpdate = bufferedValue != newValue;
    if (needUpdate)
    {
        if (newValue)
        {
            bufferReference |= bit;
        }
        else
        {
            bufferReference &= ~bit;
        }
    }
    return needUpdate;
}

template<int w, int h>
void FlipDotMatrixDisplay<w, h>::ShowBitmap(uint8_t column, uint8_t row, const MiniBitmap& bitmap)
{
    const uint8_t width = bitmap.GetWidth();
    const uint8_t height = bitmap.GetHeight();
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            Dot(column + x, row + y, bitmap.Get(x, y));
        }
    }
}


template class FlipDotMatrixDisplay<25, 6>;
template class FlipDotMatrixDisplay<25, 7>;
template class FlipDotMatrixDisplay<28, 16>;
template class FlipDotMatrixDisplay<28, 19>;