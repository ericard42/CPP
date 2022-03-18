#include "Span.hpp"
#include <iostream>

int main() {
	{
		std::cout << "With 5 numbers" << std::endl;
		Span sp = Span(5);

		try {
			sp.addNumber(5);
			try {
				sp.shortestSpan();
			}
			catch (std::exception &e) {
				std::cout << "ERROR : " << e.what() << std::endl;
			}
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(5);
		}
		catch (std::exception &e) {
			std::cout << "ERROR : " << e.what() << std::endl;
		}

		try {
			std::cout << "\tShortest : " << sp.shortestSpan() << std::endl;
			std::cout << "\tLongest : " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "ERROR : " << e.what << std::endl;
		}
	}
	{
		std::cout << "With 10000 numbers" << std::endl;

		Span sp = Span(10000);
		std::vector<int> lot(10001, 42);
		lot.at(4242) = 10;
		lot.at (32) = 400;

		try {
			sp.addNumbers(lot.begin(), lot.end());
		}
		catch (std::exception &e) {
			std::cout << "ERROR : " << e.what() << std::endl;
		}
		lot.pop_back();
		try {
			sp.addNumbers(lot.begin(), lot.end());
		}
		catch (std::exception &e) {
			std::cout << "ERROR : " << e.what() << std::endl;
		}

		try {
			std::cout << "\tShortest : " << sp.shortestSpan() << std::endl;
			std::cout << "\tLongest : " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "ERROR : " << e.what << std::endl;
		}
	}
}