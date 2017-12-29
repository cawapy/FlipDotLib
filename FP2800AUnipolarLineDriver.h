#pragma once

#include "ILineDriver.h"

class FP2800A;

// Using 14 low side drivers (FP2800A's outputs 0-13) and 14 high side drivers (FP2800A's outputs 14-27).
class FP2800AUnipolarLineDriver : public ILineDriver
{
    FP2800A& fp2800a;
    static const uint8_t lines = 28 / 2; // 14 pairs of FP2800A's 28 lines
public:
    FP2800AUnipolarLineDriver(FP2800A& fp2800a);

    virtual void EnableLine(uint8_t line, bool set) override;
    virtual void DisableLines() override;
};

