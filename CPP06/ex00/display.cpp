#include "display.hpp"

void	displayChar(char c, long valNb, bool fail)
{
	std::cout << "char: ";
	if (valNb >= CHAR_MAX || valNb <= CHAR_MIN || fail)
		std::cout << "impossible";
	else if ((c < 32 || c > 126) && (c < 9 || c > 12))
		std::cout << "Non displayable";
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

void 	displayFloat(std::string const str, float nbr, double valDb, bool fail)
{
	std::cout << "float: ";
	if (str == "inf" || str == "inff")
		std::cout << "inff";
	else if (str == "-inf" || str == "-inff")
		std::cout << "-inff";
	else if (str == "nan" || str == "nanf")
		std::cout << "nanf";
	else if (valDb > FLT_MAX || valDb < FLT_MIN || fail)
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

bool sInSet(std::string s, std::string* set, int len) {
	for (int i = 0; i < len; i++) {
		if (s == set[i])
			return (true);
	}
	return (false);
}

bool	cInSet(char c, const char* set) {
	for (int i = 0; set[i]; i++) {
		if (c == set[i])
			return (true);
	}
	return (false);
}

int verifChar(std::string str)
{
	std::string except[6] = {
			"nan",
			"nanf",
			"+inf",
			"-inf",
			"+inff",
			"-inff"
	};

	if (!cInSet(str[0], "0123456789-") && !sInSet(str, except, 6)) {
		if (str.length() != 1) {
			std::cerr << "Error : Wrong Arguments" << std::endl;
			return (-1);
		}
		return (1);
	}
	return (0);
}