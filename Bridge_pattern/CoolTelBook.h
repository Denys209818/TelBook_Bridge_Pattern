#pragma once
#include "libs.h"
#include "Instrument.h"
#include "TelBook.h"

class CoolTelBook : public TelBook
{
private:
	int size;
	string Info;
	Message* messages;
public:
	CoolTelBook(string nummer, string surname, string info);

	void AddMessage(string author, string message);

	void GetData();
};
