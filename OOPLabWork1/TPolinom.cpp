#include "TPolinom.h"

TPolinom::TPolinom()
{
	this->_first = -1;
	this->_second = -1;
	this->_third = -1;
}

number TPolinom::calculateAnswer(number x)
{
	return this->_first * x * x + this->_second * x + this->_third;
}

void TPolinom::setValues(number first, number second, number third)
{
	this->_first = first;
	this->_second = second;
	this->_third = third;
}

int TPolinom::roots(number* array)
{
	number d;
	d = (this->_second * this->_second) - (4 * this->_first * this->_third);
	if (d < 0) return 0;
	if (d == 0)
	{
		array[0] = -1 * (this->_second / (2 * this->_first));
		return 1;
	}
	array[0] = (-1 * this->_second + sqrt(d)) / (2 * this->_first);
	array[1] = (-1 * this->_second - sqrt(d)) / (2 * this->_first);
	return 2;
}

std::ostream& operator<<(std::ostream& os, TPolinom& polinom)
{
	os << polinom._first << "x^2 + " << polinom._second << "x + " << polinom._third;
	return os;
}