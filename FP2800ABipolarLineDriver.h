#pragma once

#include "ILineDriver.h"

class FP2800A;

class FP2800ABipolarLineDriver : public ILineDriver
{
    FP2800A& fp2800a;
    static const uint8_t lines = 28;
public:
    FP2800ABipolarLineDriver(FP2800A& fp2800a);

    virtual void EnableLine(uint8_t line, bool set) override;
    virtual void DisableLines() override;
};

