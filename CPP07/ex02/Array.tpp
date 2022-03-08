#ifndef ARRAY_TPP
# define ARRAY_TPP

# define TEMPLATE template <typename T>

#include "Array.hpp"
#include <stdexcept>

TEMPLATE
Array<T>::Array() : _len(0) {
	_tab = new T[0];
}

TEMPLATE
Array<T>::Array(unsigned int n) : _len(n) {
	_tab = new T[_len];
}

TEMPLATE
Array<T>::~Array() {
	delete[] _tab;
}

TEMPLATE
Array<T>::Array(Array<T> const &src) {
	*this = src;
}

TEMPLATE
T &Array<T>::operator[](int i) const {
	if (i < 0 || i >= _len)
		throw std::out_of_range("Out of range");
	return (_tab[i]);
}

TEMPLATE
Array<T> &Array<T>::operator=(Array<T> const &src) {
	_len = src.size();
	_tab = new T[_len];
	for (int i = 0; i < _len; i++)
		_tab[i] = src[i];
	return (*this);
}

TEMPLATE
int Array<T>::size() const {
	return (_len);
}

#endif