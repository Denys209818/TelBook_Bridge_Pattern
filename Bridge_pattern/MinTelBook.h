#pragma once
#include "libs.h"
#include "Instrument.h"
#include "TelBook.h"

class MinTelBook : public TelBook
{
public:
	MinTelBook(string nummer, string surname);

	void AddMessage(string author, string message);


	void GetData();
};
