#include "FP2800AUnipolarLineDriver.h"

#include <FP2800A.h>

FP2800AUnipolarLineDriver::FP2800AUnipolarLineDriver(FP2800A& fp2800a) :
    fp2800a(fp2800a)
{
}

void FP2800AUnipolarLineDriver::EnableLine(uint8_t line, bool set)
{
    if (line < 14)
    {
        fp2800a.EnableDriver(set ? line + 14 : line, set);
    }
}

void FP2800AUnipolarLineDriver::DisableLines()
{
    fp2800a.DisableDriver();
}

