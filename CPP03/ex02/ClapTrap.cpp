#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 10;
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
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> don't have enough energy to attack." << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "CL4P-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "CL4P-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage ! It's not really effective..." << std::endl;
	std::cout << "\tHe have <" << _energyPoints << "> energy points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return;
	}
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout << "CL4P-TP <" << _name << "> has been attack !" << std::endl;
	std::cout << "\tHe takes <" << amount << "> points of damage ! \"Minion ! Do something !!\"" << std::endl;
	std::cout << "\tHe have <" << _hitPoints << "> life points." << std::endl;
	if (_hitPoints == 0)
		std::cout << "\tHe's dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "Cl4P-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return;
	}
	if (_hitPoints == 10)
	{
		std::cout << "CL4P-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitPoints > 10)
		amount = 10 - _hitPoints;
	std::cout << "CL4P-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
	if (_hitPoints < 10)
		std::cout << "\tHe have <" << _hitPoints << "> life point and <" << _energyPoints << "> energy points." << std::endl;
	if (_hitPoints == 10)
		std::cout << "\tHe's full life and have <" << _energyPoints << "> energy points." << std::endl;
}

bool	ClapTrap::isDead()
{
	return (_hitPoints);
}

std::string	ClapTrap::getName()
{
	return (_name);
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}