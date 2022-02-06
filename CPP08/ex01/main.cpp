#include "Span.hpp"
#include <iostream>

int main() {
	{
		Span sp = Span(5);

		try {
			sp.addNumber(5);
			try {
				sp.shortestSpan();
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(5);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);
		std::vector<int> lot(10000, 42);
		lot.at(4242) = 10;

		sp.addNumbers(lot.begin(), lot.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}