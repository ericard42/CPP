#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &a);
		Animal &operator=(Animal const &a);

		std::string getType() const;
		virtual void		makeSound() const;

	protected:
		std::string _type;

};

#endif