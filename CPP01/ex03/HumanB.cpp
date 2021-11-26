#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon != NULL)
	{
		std::cout << this->_name;
		std::cout << " attacks with his ";
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name;
		std::cout << " can't attack..." << std::endl;
	}
}

