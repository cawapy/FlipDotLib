#include "Flip05a5x6.h"

#include "MiniBitmap.h"
#include "Font6x5.h"

Flip05a5x6::Flip05a5x6(ILineDriver& rowDriver, ILineDriver& colDriver) :
    FlipDotMatrixDisplay(rowDriver, colDriver)
{
}

void Flip05a5x6::ShowCharacter(uint8_t position, char character)
{
    const uint8_t columnsPerCharacter = 5;
    MiniBitmap bmp = Font6x5::GetCharacter(character);
    ShowBitmap(position * columnsPerCharacter, 0, bmp);
}
