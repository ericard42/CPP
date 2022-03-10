#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
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
	_type = c._type;

	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure();
	*clone = *this;
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}