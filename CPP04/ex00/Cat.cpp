#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "The animal is... a " << type << std::endl;
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
	type = c.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meeeow !" << std::endl;
}