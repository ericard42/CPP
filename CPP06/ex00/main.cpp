#include <iostream>
#include "display.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error : Wrong Arguments" << std::endl;
		return (1);
	}
	std::string argStr(av[1]);
	if (argStr.length() < 1)
	{
		std::cerr << "Error : Wrong Arguments" << std::endl;
		return (1);
	}

	std::string str = static_cast<std::string>(av[1]);

	int c = verifChar(str);
	if (c == -1)
		return (1);
	else if (c == 1)
		c = static_cast<int>(str[0]);

	double strDouble;
	bool fail = false;
	if (c)
		strDouble = static_cast<double>(c);
	else {
		std::istringstream i(str);
		i >> strDouble;
		fail = i.fail();
	}


	displayChar(static_cast<char>(strDouble), static_cast<long>(strDouble), fail);
	displayInt(static_cast<int>(strDouble), static_cast<long>(strDouble), fail);
	displayFloat(str, static_cast<float>(strDouble), strDouble, fail);
	displayDouble(str, strDouble, fail);
}

//Static_cast -> Convertir des types de la même hiérarchie de classes ou de types numériques entre eux.