#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <class T>
class Array {
	public :
		Array() : _len(0), _tab(NULL) {
		}
		Array(unsigned int n) : _len(n) {
			_tab = new T[_len];
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
		int	_len;
		T	*_tab;

};


#endif