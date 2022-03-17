#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <class T>
class Array {
	public :
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &src);

		Array &operator=(Array const &src);
		T	&operator[](int i) const;

		int	size() const;

	private :
		int	_len;
		T	*_tab;
		bool _isTab;

};

#include "Array.tpp"

#endif