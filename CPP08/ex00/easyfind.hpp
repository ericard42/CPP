#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
int		easyfind(T &t, int i) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		return (-1);
	return (std::distance(t.begin(), it));
}

#endif