#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal::Animal(Animal const &a)
{
	*this = a;
}

Animal &Animal::operator=(Animal const &a)
{
	type = a.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "*Random Animal Sound*" << std::endl;
}

Brain	*Animal::getBrain() const
{
	return (NULL);
}