#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void) const
{
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon.getType() << std::endl;
}