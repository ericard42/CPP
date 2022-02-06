#include "Span.hpp"
#include <iostream>

Span::Span() : _max(0) {}
Span::Span(unsigned int max) : _max(max) {}
Span::~Span() {}

Span::Span(Span const &src) {
	*this = src;
}

Span &Span::operator=(Span const &src) {
	_max = src._max;
	_numbers = src._numbers;
	return *this;
}

void	Span::addNumber(const int n) {
	if (_numbers.size() == _max)
		throw std::out_of_range("too many value");
	_numbers.push_back(n);
}

unsigned int	Span::shortestSpan() {
	if (_numbers.size() <= 1)
		throw std::length_error("you need at least 2 value");

	std::vector<int> cp = _numbers;
	
	std::sort(cp.begin(), cp.end());
	int min = cp.at(1) - cp.front();
	for (unsigned int i = 1; i < cp.size() - 1; i++)
		if ((cp.at(i) - cp.at(i - 1)) < min)
			min = cp.at(i) - cp.at(i - 1);
	return (min);
}

unsigned int	Span::longestSpan() {
	if (_numbers.size() <= 1)
		throw std::length_error("you need at least 2 value");
	
	std::vector<int> cp = _numbers;

	std::sort(cp.begin(), cp.end());
	return (cp.back() - cp.front());
}