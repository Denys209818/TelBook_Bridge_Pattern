#include "libs.h"
#include "TelBook.h"

TelBook::TelBook()
{
	this->i = nullptr;
}

void TelBook::ChangeInstrument(Instrument* i)
{
	if (this->i != nullptr) delete this->i;
	this->i = i;
}