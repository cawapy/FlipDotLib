#pragma once

#include <inttypes.h>

class ILineDriver;
class MiniBitmap;

template<int w, int h> class FlipDotMatrixDisplay
{
    ILineDriver& rowDriver;
    ILineDriver& colDriver;
    void(*underVoltageGuard)();
    bool useBuffer;
    uint8_t buffer[(w * h + 7) / 8];
public:
    FlipDotMatrixDisplay(ILineDriver& rowDriver, ILineDriver& colDriver, void (*underVoltageGuard)(void) = 0);
    void Reset();
    void Dot(uint8_t col, uint8_t row, bool set);
    void DotColumn(uint8_t column, uint8_t row, uint8_t pattern, uint8_t bitCount);
    void ShowBitmap(uint8_t column, uint8_t row, const MiniBitmap& bitmap);
    void EnableBuffer() { useBuffer = true; }
private:
    bool Update(uint8_t col, uint8_t row, bool set);
    void SetDot(uint8_t col, uint8_t row, bool set);
    void UnderVoltageGuard();
};

