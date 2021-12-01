#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << "The animal is... a " << _type << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &c)
{
	*this = c;
}

Cat &Cat::operator=(Cat const &c)
{
	_type = c._type;
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