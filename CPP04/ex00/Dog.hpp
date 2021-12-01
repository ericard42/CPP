#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

	public:
		Dog();
		~Dog();
		Dog(Dog const &d);
		Dog &operator=(Dog const &d);

		void	makeSound() const;

	private:

};

#endif