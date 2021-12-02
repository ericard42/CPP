#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const &a)
{
	*this = a;
}

AMateria &AMateria::operator=(AMateria const &a)
{
	_type = a.type;

	return (*type);
}

AMateria::AMateria(std::string const &type) : _type(type)
{

}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	
}