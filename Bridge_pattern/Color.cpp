#include "libs.h"
#include "Color.h"

void Color::GetDesign()
{
	if (col > 12) col = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), this->col);
	cout << ".";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	col++;
}