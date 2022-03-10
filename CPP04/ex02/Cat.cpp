#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	type = "Cat";
	std::cout << "The animal is... a " << type << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &c)
{
	std::cout << "The Animal is... a copy of a cat" << std::endl;
	*this = c;
}

Cat &Cat::operator=(Cat const &c)
{
	type = c.type;
	_brain = new Brain(*c._brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meeeow !" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (_brain);
}