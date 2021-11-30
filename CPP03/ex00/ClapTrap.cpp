#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "CL4P-TP <" << _name << "> has been summoned" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP <" << _name << "> has been destroy" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	*this = c;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &c)
{
	_name = c._name;
	_hitpoints = c._hitpoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> don't have enough energy to attack. He takes <1> points of damage." << std::endl;
		_hitpoints--;
		if (_hitpoints == 0)
			std::cout << "He's dead..." << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "CL4P-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "CL4P-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !";
	std::cout << " It's not really effective..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return; 
	}
	if (amount > _hitpoints)
		amount = _hitpoints;
	_hitpoints -= amount;
	std::cout << "CL4P-TP <" << _name << "> has been attack !";
	std::cout << " He takes <" << amount << "> points of damage ! \"Minion ! Do something !!\"" << std::endl;
	if (_hitpoints == 0)
		std::cout << "He's dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return; 
	}
	if (_hitpoints == 10)
	{
		std::cout << "CL4P-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitpoints > 10)
		amount = 10 - _hitpoints;
	std::cout << "CL4P-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	if (_hitpoints == 10)
		std::cout << "He's full life !" << std::endl;
}

bool	ClapTrap::isDead()
{
	return (_hitpoints);
}