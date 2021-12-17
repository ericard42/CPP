#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <class T>
class Array {
	public :
		Array() {
			_tab = new T[0];
			_len = 0;
		}
		Array(unsigned int n) {
			_tab = new T[n];
			_len = n;
		}
		~Array() {
			delete[] _tab;
		}
		Array(Array const &src) {
			*this = src;
		}

		T	&operator[](int i) const {
			if (i < 0 || i >= _len)
				throw std::out_of_range("Out of range");
			return (_tab[i]);

		}
		Array &operator=(Array const &src) {
			_len = src.size();
			_tab = new T[_len];
			for (int i = 0; i < _len; i++)
				_tab[i] = src[i];
			return (*this);
		}

		int	size() const {
			return (_len);
		}

	private :
		T	*_tab;
		int	_len;

};


#endif