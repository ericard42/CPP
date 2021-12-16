#include "iter.hpp"
#include <iostream>

void 	display(std::string const &str)
{
	std::cout << str << std::endl;
}

void 	addNumber(int const &nbr)
{
	static int i= 0;
	i += nbr;
	std::cout << i << std::endl;
}

int		main()
{
	int arrayInt[] = {1, 2, 3, 4, 5};
	std::string str[] = {"Hello", "Potato"};

	iter(str, 2, display);
	iter(arrayInt, 5, addNumber);
}