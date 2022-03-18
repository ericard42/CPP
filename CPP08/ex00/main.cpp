#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{
	{
		std::cout << "TESTING WITH VECTOR :" << std::endl;
		std::vector<int> tab;
		bool isFind;

		for (int i = 1; i < 50; i++)
			tab.push_back(i);
		isFind = easyfind(tab, 42);
		if (!isFind)
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container" << std::endl;

		isFind = easyfind(tab, 62);
		if (!isFind)
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container" << std::endl;
	}
	{
		std::cout << "\nTESTING WITH LIST :" << std::endl;
		std::list<int> tab;
		bool isFind;

		for (int i = 1; i < 50; i++)
			tab.push_back(i);
		isFind = easyfind(tab, 42);
		if (!isFind)
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container" << std::endl;

		isFind = easyfind(tab, 62);
		if (!isFind)
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container" << std::endl;
	}
}