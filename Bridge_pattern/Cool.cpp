#include "libs.h"
#include "Cool.h"

void Cool::GetDesign() 
{
	if (col > 12) col = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), this->col);
	cout << "||";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	col++;
}