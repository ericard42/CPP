#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal{

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &a);
		Animal &operator=(Animal const &a);

		std::string getType() const;
		virtual void		makeSound() const;

		virtual Brain	*getBrain() const = 0;

	protected:
		std::string type;

};

#endif