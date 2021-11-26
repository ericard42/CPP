#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{

}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &newType)
{
	this->_type = newType;
}