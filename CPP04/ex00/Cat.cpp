#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "The animal is... a " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &c)
{
	*this = c;
}

Cat &Cat::operator=(Cat const &c)
{
	_type = c._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meeeow !" << std::endl;
}