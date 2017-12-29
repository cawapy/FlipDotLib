#pragma once

#include <inttypes.h>

class MiniBitmap
{
    const uint8_t* buffer;
    uint8_t width;
    uint8_t height;
public:
    MiniBitmap(uint8_t width, uint8_t height, const uint8_t* buffer);

    bool Get(uint8_t x, uint8_t y) const;

    uint8_t GetWidth() const { return width; }
    uint8_t GetHeight() const { return height; }
};

