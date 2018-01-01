#include "Flip05a5x7.h"

#include "Font7x5.h"

Flip05a5x7::Flip05a5x7(ILineDriver& rowDriver, ILineDriver& colDriver, void(*underVoltageGuard)(void) /* = 0 */) :
    FlipDotMatrixDisplay(rowDriver, colDriver, underVoltageGuard)
{
}

void Flip05a5x7::ShowCharacter(uint8_t position, char character)
{
    const uint8_t columnsPerCharacter = 5;
    MiniBitmap bmp = Font7x5::GetCharacter(character);
    ShowBitmap(position * columnsPerCharacter, 0, bmp);
}
