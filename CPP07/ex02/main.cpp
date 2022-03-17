#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

int main() {
	{
		std::cout << "TESTING WITH INT" << std::endl;
		std::cout << std::endl;
		Array<int> num(5);
		Array<int> test1 = num;

		try {
			for (int i = 0; i < 5; i++)
				num[i] = i;
			for (int i = 0; i < 5; i++)
				test1[i] = i + 1;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		Array<int> test2(num);

		std::cout << &num << std::endl;
		std::cout << &test1 << std::endl;
		std::cout << &test2 << "\n" << std::endl;

		try {
			std::cout << num.size() << " elements : ";
			for (int i = 0; i < num.size(); i++) {
				std::cout << num[i] << ", ";
			}
			std::cout << std::endl;
			std::cout << test1.size() << " elements : ";
			for (int i = 0; i < 5; i++) {
				std::cout << test1[i] << ", ";
			}
			std::cout << std::endl;
			std::cout << test2.size() << " elements : ";
			for (int i = 0; i < 6; i++) {
				std::cout << test2[i] << ", ";
			}
			std::cout << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "TESTING WITH STRING" << std::endl;
		std::cout << std::endl;
		Array<std::string> str(5);
		Array<std::string> test1 = str;

		try {
			for (int i = 0; i < 5; i++)
				str[i] = "Pouet";
			for (int i = 0; i < 5; i++)
				test1[i] = "Potato";
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		Array<std::string> test2(str);

		std::cout << &str << std::endl;
		std::cout << &test1 << std::endl;
		std::cout << &test2 << "\n" << std::endl;

		try {
			std::cout << str.size() << " elements : ";
			for (int i = 0; i < str.size(); i++) {
				std::cout << i << "->" << str[i] << ", ";
			}
			std::cout << std::endl;
			std::cout << test1.size() << " elements : ";
			for (int i = 0; i < 5; i++) {
				std::cout << i << "->" << test1[i] << ", ";
			}
			std::cout << std::endl;
			std::cout << test2.size() << " elements : ";
			for (int i = 0; i < 6; i++) {
				std::cout << i << "->" << test2[i] << ", ";
			}
			std::cout << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}