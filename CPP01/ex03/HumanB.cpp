#include "HumanB.hpp"

HumanB::HumanB (std::string name): _name(name), _weapon(nullptr)
{

}

HumanB::~HumanB (void)
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon->setType(weapon.getType());
}

void	HumanB::attack (void) const
{
	if (this->_weapon)
	{
		std::cout << this->_name;
		std::cout << " attacks with his ";
		std::cout << this->_weapon.getType() << std::endl;
	}
	else
	{

	}
}