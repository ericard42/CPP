#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	_hitpoints = 100;
	_ennergyPoints = 50;
	_attackDamage = 20;
	std::cout << "SC4V-TP <" << _name << "> has been summoned" << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << _name << "> has been destroy" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &s)
{
	*this = s;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &s)
{
	_name = s._name;
	_hitpoints = s._hitpoints;
	_ennergyPoints = s._ennergyPoints;
	_attackDamage = s._attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (_ennergyPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> don't have enough energy to attack. He takes <1> points of damage." << std::endl;
		_hitpoints--;
		if (_hitpoints == 0)
			std::cout << "He's dead..." << std::endl;
		return;
	}
	if (_ennergyPoints == 0)
	{
		std::cout << "SC4V-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_ennergyPoints--;
	std::cout << "SC4V-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !";
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
	if (_hitpoints == 100)
		std::cout << "He's full life !" << std::endl;
}

bool	ScavTrap::isDead()
{
	return (_hitpoints);
}