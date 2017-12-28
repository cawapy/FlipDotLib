#include "FP2800ABipolarLineDriver.h"

#include <FP2800A.h>

FP2800ABipolarLineDriver::FP2800ABipolarLineDriver(FP2800A& fp2800a) :
    fp2800a(fp2800a)
{
}

void FP2800ABipolarLineDriver::EnableLine(uint8_t line, bool set)
{
    fp2800a.EnableDriver(line, set);
}

void FP2800ABipolarLineDriver::DisableLines()
{
    fp2800a.DisableDriver();
}
