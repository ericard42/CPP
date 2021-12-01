#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroy" << std::endl;
}

Animal::Animal(Animal const &a)
{
	*this = a;
}

Animal &Animal::operator=(Animal const &a)
{
	_type = a._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "*Random Animal Sound*" << std::endl;
}