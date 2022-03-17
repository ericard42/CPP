#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int const lenght, void (*f)(T const &tab))
{
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

#endif