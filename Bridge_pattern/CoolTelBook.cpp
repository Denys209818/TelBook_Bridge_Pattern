#include "libs.h"
#include "CoolTelBook.h"

CoolTelBook::CoolTelBook(string nummer, string surname, string info)
{
	this->nummer = nummer;
	this->surname = surname;
	this->Info = info;
	messages = new Message[255];
	size = 0;
}

void CoolTelBook::AddMessage(string author, string message)
{
	this->messages[size].author = author;
	this->messages[size].message = message;
	size++;
}

void CoolTelBook::GetData()
{
	for (int i = 0; i < 17; i++) if (this->i != nullptr) this->i->GetDesign();
	cout << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Nummer - " << this->nummer << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Surname - " << this->surname << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Info: " << this->Info << endl;
	if (this->i != nullptr) this->i->GetDesign();
	cout << "Messages: " << endl;
	for (int i = 0; i < this->size; i++)
	{
		if (this->i != nullptr) this->i->GetDesign();
		cout << "------------------" << endl;
		if (this->i != nullptr) this->i->GetDesign();
		cout << "Author: " << this->messages[i].author << endl;
		if (this->i != nullptr) this->i->GetDesign();
		cout << "Message: " << this->messages[i].message << endl;
		if (this->i != nullptr) this->i->GetDesign();
		cout << "------------------" << endl;
	}

	for (int i = 0; i < 17; i++) if (this->i != nullptr) this->i->GetDesign();
	cout << endl;


}