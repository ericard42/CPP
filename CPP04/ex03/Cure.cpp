#include "Cure.hpp"

Cure::Cure() : AMataeria("cure")
{
	
}

Cure::~Cure()
{

}

Cure::Cure(Cure const &c)
{
	*this = c;
}

Cure &Cure::operator=(Cure const &c)
{
	_type = c.type;

	return (*this);
}

AMataeria *Cure::clone() const
{
	AMataeria *clone = new Cure()

	*clone = *this;
	return (clone);
}

void Cure::use(ICharacter &target)
{
	
}