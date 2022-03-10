#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong Cat";
	std::cout << "The wrong animal is... a " << type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "The wrong cat has been destroyed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &w)
{
	*this = w;
}

WrongCat &WrongCat::operator=(WrongCat const &w)
{
	type = w.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "This is the sound of the cat !" << std::endl;
}