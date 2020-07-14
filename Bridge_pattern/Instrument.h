#pragma once
#include "libs.h"

class Instrument
{
protected:
	int col;
public:
	Instrument();

	virtual void GetDesign() = 0;
};
