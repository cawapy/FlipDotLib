#pragma once

#include "FlipDotMatrixDisplay.h"

class Flip05a5x6 : public FlipDotMatrixDisplay<25, 6>
{
public:
    Flip05a5x6(ILineDriver& rowDriver, ILineDriver& colDriver);

    void ShowCharacter(uint8_t position, char character);
};

