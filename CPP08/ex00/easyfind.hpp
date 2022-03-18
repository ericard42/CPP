#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
bool	easyfind(T &t, int i) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		return (false);
	return (true);
}

#endif