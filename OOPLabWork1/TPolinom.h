#pragma once

#include <iostream>
#include <math.h>
#include "number.h"

class TPolinom
{
private:
	number _first;
	number _second;
	number _third;
public:
	TPolinom();
	number calculateAnswer(number);
	void setValues(number, number, number);
	int roots(number*);
	friend std::ostream& operator<<(std::ostream&, TPolinom&);
};

