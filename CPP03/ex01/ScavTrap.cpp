#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << _name << "> has downgraded in a CL4P-TP !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &s)
{
	*this = s;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &s)
{
	_name = s._name;
	_hitPoints = s._hitPoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "CL4P-TP <" << _name << "> has upgraded in a SC4V-TP !" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> don't have enough energy to attack." << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "SC4V-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !" << std::endl;
	std::cout << "\tHe have <" << _energyPoints << "> energy points." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return; 
	}
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout << "SC4V-TP <" << _name << "> has been attack !" << std::endl;
	std::cout << "\tHe takes <" << amount << "> points of damage ! \"Aie...\"" << std::endl;
	std::cout << "\tHe have <" << _hitPoints << "> life points." << std::endl;
	if (_hitPoints == 0)
		std::cout << "\tHe's dead..." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return; 
	}
	if (_hitPoints == 100)
	{
		std::cout << "SC4V-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitPoints > 100)
		amount = 100 - _hitPoints;
	std::cout << "SC4V-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	_energyPoints--;
	if (_hitPoints < 100)
		std::cout << "\tHe have <" << _hitPoints << "> life point and <" << _energyPoints << "> energy points." << std::endl;
	if (_hitPoints == 100)
		std::cout << "\tHe's full life !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "SC4V-TP <" << _name << "> enterred in Gate keeper mode !" << std::endl;
}