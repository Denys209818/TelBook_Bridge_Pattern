#pragma once
#include "libs.h"
#include "Instrument.h"

class TelBook
{
protected:
	Instrument* i;
	string nummer;
	string surname;

public:
	TelBook();

	void ChangeInstrument(Instrument* i);

	virtual void AddMessage(string author, string message) = 0;

	virtual void GetData() = 0;

};
