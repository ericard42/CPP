#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

int main()
{
	Array<int> num(5);
	Array<int> test1 = num;

	try {
		for (int i = 0; i < 5; i++)
			num[i] = i;
		for (int i = 0; i < 5; i++)
			test1[i] = i + 1;
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Array<int> test2(num);

	std::cout << &num << std::endl;
	std::cout << &test1 << std::endl;
	std::cout << &test2 << "\n" << std::endl;

	try {
		for (int i = 0; i < 5; i++) {
			std::cout << num[i] << std::endl;
			std::cout << test1[i] << std::endl;
			std::cout << test2[i] << "\n" << std::endl;
		}
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}