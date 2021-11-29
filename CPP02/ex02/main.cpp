#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	{
	//Comparaisons
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		bool ret;
		std::cout << "a : " << a << " & b : " << b << std::endl;
	// >
		std::cout << (ret = (a > b)) << std::endl;
	// <
		std::cout << (ret = (a < b)) << std::endl;
	// >=
		std::cout << (ret = (a >= b)) << std::endl;
	// <=
		std::cout << (ret = (a <= b)) << std::endl;
	// ==
		std::cout << (ret = (a == b)) << std::endl;
	// !=
		std::cout << (ret = (a != b)) << std::endl;
		
		std::cout << std::endl;
	}

	{
	//Arithmétiques
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << "a : " << a << " & b : " << b << std::endl;
	// +
		std::cout << (a + b) << std::endl;
	// -
		std::cout << (a - b) << std::endl;
	// *
		std::cout << (a * b) << std::endl;
	// /
		std::cout << (a / b) << std::endl;

		std::cout << std::endl;
	}

	{
	//Incrémentation
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
	// ++i
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << std::endl;
	// i++
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << std::endl;
	// --i
		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << std::endl;
	// i--
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
	}

	{
	// max and min
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
	// min
		std::cout << "a : " << a << " & b : " << b << std::endl;
		std::cout << Fixed::min(a, b) << std::endl;
	// max
		std::cout << Fixed::max(a, b) << std::endl;

		std::cout << std::endl;
	}
	

	return (0);
}