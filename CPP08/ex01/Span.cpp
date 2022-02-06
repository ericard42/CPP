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

	std::sort(_numbers.begin(), _numbers.end());
	int min = _numbers.at(1) - _numbers.front();
	for (unsigned int i = 1; i < _numbers.size() - 1; i++)
		if ((_numbers.at(i) - _numbers.at(i - 1)) < min)
			min = _numbers.at(i) - _numbers.at(i - 1);
	return (min);
}

unsigned int	Span::longestSpan() {
	if (_numbers.size() <= 1)
		throw std::length_error("you need at least 2 value");
	std::sort(_numbers.begin(), _numbers.end());
	return (_numbers.back() - _numbers.front());
}