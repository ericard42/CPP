#include "Ice.hpp"

Ice::Ice() : AMataeria("ice")
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
	_type = i.type;

	return (*this);
}

AMataeria *Ice::clone() const
{
	AMataeria *clone = new Ice();

	*clone = *this;
	return (clone);
}

void Ice::use(ICharacter &target)
{
	
}