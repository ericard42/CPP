#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>			tab;
	std::vector<int>::iterator	it;

	{
		for (int i = 1; i < 100; i += 3)
			tab.push_back(i);
		it = easyfind(tab, 36);
		if (it == tab.end())
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container : " << &it << std::endl;
	}
	{
		it = easyfind(tab, 37);
		if (it == tab.end())
			std::cout << "Value not found in container" << std::endl;
		else
			std::cout << "Value found in container : " << &it << std::endl;
	}
}