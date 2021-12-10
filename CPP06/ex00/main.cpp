#include <iostream>
#include <sstream>
#include <climits>

void	displayChar(char c, long valNb, bool fail)
{
	std::cout << "char: ";
	if ((c < 32 || c > 126) && !fail)
		std::cout << "Non displayable";
	else if (valNb >= CHAR_MAX || valNb <= CHAR_MIN || fail)
		std::cout << "impossible";
	else
		std::cout << "\'" << c << "\'";
	std::cout << std::endl;
}

void	displayInt(int i, long valNb, bool fail)
{
	std::cout << "int: ";
	if (valNb > INT_MAX || valNb < INT_MIN || fail)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void 	displayFloat(std::string const str, float nbr, bool fail)
{
	std::cout << "float: ";
	if (str == "inf" || str == "inff")
		std::cout << "inff";
	else if (str == "-inf" || str == "-inff")
		std::cout << "-inff";
	else if (str == "nan" || str == "nanf")
		std::cout << "nanf";
	else if (fail)
		std::cout << "impossible";
	else
		std::cout << nbr << "f";
	std::cout << std::endl;
}

void 	displayDouble(std::string const str, double nbr, bool fail)
{
	std::cout << "double: ";
	if (str == "inf" || str == "inff")
		std::cout << "inf";
	else if (str == "-inf" || str == "-inff")
		std::cout << "-inf";
	else if (str == "nan" || str == "nanf")
		std::cout << "nan";
	else if (fail)
		std::cout << "impossible";
	else
		std::cout << nbr;
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error : Wrong Arguments" << std::endl;
		return (1);
	}

	std::string str = static_cast<std::string>(av[1]);
	std::istringstream i(str);
	double strDouble;
	i >> strDouble;

	displayChar(static_cast<char>(strDouble), static_cast<long>(strDouble), i.fail());
	displayInt(static_cast<int>(strDouble), static_cast<long>(strDouble), i.fail());
	displayFloat(str, static_cast<float>(strDouble), i.fail());
	displayDouble(str, strDouble, i.fail());
}