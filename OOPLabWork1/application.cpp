#include "application.h"
#include <iostream>
#include "number.h"
#include "TPolinom.h"

TApplication::TApplication()
{

}

int TApplication::exec()
{
	int ch;
	number first = -1, second = -1, third = -1;
	TPolinom polinom;
	number x;
	number array[2];
	while (true)
	{
		std::cout << "Enter zero (0) to exit" << std::endl;
		std::cout << "Enter one (1) to write coefficients" << std::endl;
		std::cout << "Enter two (2) to execute roots" << std::endl;
		std::cout << "Enter three (3) to enter new values" << std::endl;
		std::cout << "Enter four (4) to print result" << std::endl;
		std::cin >> ch;
		std::cout << std::endl;
		switch (ch)
		{
		case 0: 
			return 0;
			break;
		case 1:
			std::cout << "First coefficient: ";
			std::cin >> first;
			std::cout << "Second coefficient: ";
			std::cin >> second;
			std::cout << "Third coefficient: ";
			std::cin >> third;
			polinom.setValues(first, second, third);
			break;
		case 2:
			switch (polinom.roots(array))
			{
			case 0:
				std::cout << "No roots" << std::endl;
				break;
			case 1:
				std::cout << "Answer: x = " << array[0] << std::endl;
				break;
			case 2:
				std::cout << "Answer: x1 = " << array[0] << ", x2 = " << array[1] << std::endl;
				break;
			}
			break;
		case 3:
			polinom.setValues(first, second, third);
			std::cout << "Enter x: ";
			std::cin >> x;
			std::cout << polinom.calculateAnswer(x) << std::endl;
			break;
		case 4:
			std::cout << std::endl << polinom << std::endl;
			break;
		default: break;
		}
		std::cout << std::endl;
	}
}