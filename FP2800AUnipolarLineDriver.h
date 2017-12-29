#pragma once

#include "ILineDriver.h"

class FP2800A;

class FP2800AUnipolarLineDriver : public ILineDriver
{
    FP2800A& fp2800a;
public:
    FP2800AUnipolarLineDriver(FP2800A& fp2800a);

    virtual void EnableLine(uint8_t line, bool set) override;
    virtual void DisableLines() override;
};

