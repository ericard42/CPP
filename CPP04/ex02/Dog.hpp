#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	public:
		Dog();
		~Dog();
		Dog(Dog const &d);
		Dog &operator=(Dog const &d);

		void	makeSound() const;
		Brain	*getBrain() const;

	private:
		Brain *_brain;

};

#endif