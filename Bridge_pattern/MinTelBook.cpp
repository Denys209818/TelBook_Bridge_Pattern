#include "libs.h"
#include "MinTelBook.h"

MinTelBook::MinTelBook(string nummer, string surname)
{
	this->nummer = nummer;
	this->surname = surname;
}

void MinTelBook::AddMessage(string author, string message)
{
	throw;
}

void MinTelBook::GetData()
{
	for (int i = 0; i < 17; i++) if (this->i != nullptr) this->i->GetDesign();
	cout << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Nummer - " << this->nummer << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Surname - " << this->surname << endl;
	for (int i = 0; i < 17; i++) if (this->i != nullptr) this->i->GetDesign();
	cout << endl;
}