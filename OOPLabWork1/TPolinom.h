#pragma once

#include <iostream>
#include <cmath>
#include "number.h"

class TPolinom
{
	number first, second, third;
public:
	TPolinom();
	number calculateAnswer(number);
	void setValues(number, number, number);
	int roots(number*);
	friend std::ostream& operator<<(std::ostream&, TPolinom&);
};

