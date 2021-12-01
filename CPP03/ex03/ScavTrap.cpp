#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "CL4P-TP <" << _name << "> has upgraded in a SC4V-TP ! " << std::endl;
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
	_hitpoints = s._hitpoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "CL4P-TP <" << _name << "> has upgraded in a SC4V-TP !" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> don't have enough energy to attack. He takes <1> points of damage." << std::endl;
		_hitpoints--;
		if (_hitpoints == 0)
			std::cout << "He's dead..." << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "SC4V-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return; 
	}
	if (amount > _hitpoints)
		amount = _hitpoints;
	_hitpoints -= amount;
	std::cout << "SC4V-TP <" << _name << "> has been attack !";
	std::cout << " He takes <" << amount << "> points of damage ! \"Aie...\"" << std::endl;
	if (_hitpoints == 0)
		std::cout << "He's dead..." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return; 
	}
	if (_hitpoints == 100)
	{
		std::cout << "SC4V-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitpoints > 100)
		amount = 100 - _hitpoints;
	std::cout << "SC4V-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	if (_hitpoints == 10)
		std::cout << "He's full life !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "SC4V-TP <" << _name << "> enterred in Gate keeper mode !" << std::endl;
}