#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(Ice const &i)
{
	*this = i;
}

Ice &Ice::operator=(Ice const &i)
{
	_type = i._type;

	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *clone = new Ice();

	*clone = *this;
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}