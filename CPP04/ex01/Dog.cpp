#include "Dog.hpp"

Dog::Dog()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "The animal is... a " << _type << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &d)
{
	*this = d;
}

Dog &Dog::operator=(Dog const &d)
{
	_type = d._type;
	_brain = new Brain(*d._brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Waf Waf !" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (_brain);
}