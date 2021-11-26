#include <iostream>
#include <fstream>

std::string		myReplace(std::string str, std::string s1, std::string s2)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.compare(i, s1.length(), s1) == 0)
		{
			str.erase(i, s1.length());
			str.insert(i, s2);
			i = i + s2.length();
		}
	}

	return (str);
}

bool		verifStr(std::string file, std::string s1, std::string s2)
{
	if (file == "" || s1 == "" || s2 == "")
	{
		std::cout << "Error: Argument can't be empty..." << std::endl;
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Wrong arguments" << std::endl;
		return (1);
	}
	if (verifStr(av[1], av[2], av[3]) == false)
		return (1);

	std::ofstream	newFile(std::string(std::string(av[1]) + ".replace").c_str());
	std::ifstream	originalFile(av[1]);

	if (originalFile.is_open())
	{
		std::string line;
		std::string originalString;
		while (getline(originalFile, line))
		{
			originalString.insert(originalString.length(), line + "\n");
		}
		std::string	newStr = myReplace(originalString, av[2], av[3]);
		newFile << newStr << std::endl;
		originalFile.close();
		newFile.close();
	}
	else
	{
		std::cerr << "Error: Unable to open file" << std::endl;
		return (1);
	}
	return (0);
}