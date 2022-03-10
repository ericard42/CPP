#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "The animal is... a " << type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &d)
{
	*this = d;
}

Dog &Dog::operator=(Dog const &d)
{
	type = d.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Waf Waf !" << std::endl;
}