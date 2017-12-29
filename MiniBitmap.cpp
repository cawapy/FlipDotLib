#include "MiniBitmap.h"

MiniBitmap::MiniBitmap(uint8_t width, uint8_t height, const uint8_t* buffer) :
    buffer(buffer),
    width(width),
    height(height)
{
}

bool MiniBitmap::Get(uint8_t x, uint8_t y) const
{
    if (x < width && y < height)
    {
        uint16_t byteAddress = x * ((height + 7) / 8) + y / 8;
        uint8_t bitAddress = y % 8;
        return (buffer[byteAddress] & (1 << bitAddress)) != 0;
    }
    return false;
}
