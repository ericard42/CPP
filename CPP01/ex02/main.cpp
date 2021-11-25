#include <iostream>

int	main()
{
	std::string	stringBASE = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringBASE;
	std::string &stringREF = stringBASE;

	std::cout << " Adress of Original : " << &stringBASE << std::endl;
	std::cout << "  Adress of Pointer : " << stringPTR << std::endl;
	std::cout << "Adress of Reference : " << &stringREF << std::endl;

	std::cout << " String of Original : " << stringBASE << std::endl;
	std::cout << "  String of Pointer : " << *stringPTR << std::endl;
	std::cout << "String of Reference : " << stringREF << std::endl;

	return (0);
}