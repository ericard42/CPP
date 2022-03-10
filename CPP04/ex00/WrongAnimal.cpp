#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong animal has been created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The wrong animal has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &w)
{
	*this = w;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &w)
{
	type = w.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This is not the sound of the cat..." << std::endl;
}