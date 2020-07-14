#include "libs.h"
#include "Instrument.h"
#include "Simple.h"
#include "Color.h"
#include "Cool.h"
#include "TelBook.h"
#include "MinTelBook.h"
#include "CoolTelBook.h"



void main() 
{
	setlocale(LC_CTYPE, "ukr");
	TelBook ** tb = new TelBook*[3];
	tb[0] = new MinTelBook("+3805804128015", "Test1");
	tb[1] = new CoolTelBook("+3805804128015", "Test2", "awdawdawfawfa");
	tb[1]->AddMessage("Test3", "awdawdfawgawgawfawf1");
	tb[1]->AddMessage("Test4", "awdawdfawgawgawfawf2");
	tb[1]->AddMessage("Test5", "awdawdfawgawgawfawf3");
	tb[2] = new MinTelBook("+380452523525", "Test6");

	for(int i = 0; i < 3; i++) 
	{
		if (i == 0) { cout << "Просте оформлення: " << endl; tb[i]->ChangeInstrument(new Simple); }
		else if (i == 1) { cout << "Кольорове просте оформлення: " << endl; tb[i]->ChangeInstrument(new Color); }
		else if (i == 2) { cout << "Класне кольорове оформлення: " << endl; tb[i]->ChangeInstrument(new Cool); }
		tb[i]->GetData();
	}


}