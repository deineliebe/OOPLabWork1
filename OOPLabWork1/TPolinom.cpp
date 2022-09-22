#include "TPolinom.h"

TPolinom::TPolinom()
{
	this->first = -1;
	this->second = -1;
	this->third = -1;
}

number TPolinom::calculateAnswer(number x)
{
	return this->first * x * x + this->second * x + this->third;
}

void TPolinom::setValues(number first, number second, number third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}

int TPolinom::roots(number* array)
{
	number d = sqrt(this->second * this->second - 4 * this->first * this->third);
	if (d < 0) return 0;
	if (d == 0)
	{
		array[0] = -1 * (this->second / (2 * this->first));
		return 1;
	}
	array[0] = (-1 * this->second + d) / (2 * this->first);
	array[1] = (-1 * this->second - d) / (2 * this->first);
	return 2;
}

std::ostream& operator<<(std::ostream& os, TPolinom& polinom)
{
	os << polinom.first << "x^2 + " << polinom.second << "x + " << polinom.third;
	return os;
}