#pragma once

#include "FlipDotMatrixDisplay.h"

class Flip05a5x7 : public FlipDotMatrixDisplay<25, 7>
{
public:
    Flip05a5x7(ILineDriver& rowDriver, ILineDriver& colDriver, void(*underVoltageGuard)(void) = 0);

    void ShowCharacter(uint8_t position, char character);
};

