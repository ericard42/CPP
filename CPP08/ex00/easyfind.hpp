#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &t, int i) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);
	return (it);
}

#endif