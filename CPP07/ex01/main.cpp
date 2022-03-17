#include "iter.hpp"
#include <iostream>

void 	display(std::string const &str)
{
	std::cout << str << std::endl;
}

void 	addNumber(int const &nbr)
{
	static int i = 0;
	std::cout << i << " become ";
	i += nbr;
	std::cout << i << std::endl;
}
int		main()
{
	int arrayInt[] = {1, 2, 3, 4, 5};
	std::string str[] = {"Hello", "Potato", "Norminet is God"};

	iter(str, sizeof str/sizeof str[0], display);
	std::cout << std::endl;
	iter(arrayInt, sizeof arrayInt/sizeof arrayInt[0], addNumber);
	return 0;
}