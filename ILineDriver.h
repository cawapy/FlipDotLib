#pragma once

#include <inttypes.h>

class ILineDriver
{
public:
    virtual void EnableLine(uint8_t line, bool set) = 0;
    virtual void DisableLines() = 0;
};

