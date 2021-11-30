#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_ennergyPoints = 100;
	_attackDamage = 30;
	std::cout << "CL4P-TP <" << _name << "> has upgraded in a FR4G-TP !" << std::endl;
}

FragTrap::~FragTrap()
{

}

FragTrap::FragTrap(FragTrap const &f)
{
	*this = f;
}

FragTrap &FragTrap::operator=(FragTrap const &f)
{
	_name = f._name;
	_attackDamage = f._attackDamage;
	_ennergyPoints = f._ennergyPoints;
	_hitpoints = f._hitpoints;

	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (_ennergyPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> don't have enough energy to attack. He takes <1> points of damage." << std::endl;
		_hitpoints--;
		if (_hitpoints == 0)
			std::cout << "He's dead..." << std::endl;
		return;
	}
	if (_ennergyPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_ennergyPoints--;
	std::cout << "FR4G-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return; 
	}
	if (amount > _hitpoints)
		amount = _hitpoints;
	_hitpoints -= amount;
	std::cout << "FR4G-TP <" << _name << "> has been attack !";
	std::cout << " He takes <" << amount << "> points of damage ! \"Not nice...\"" << std::endl;
	if (_hitpoints == 0)
		std::cout << "He's dead..." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return; 
	}
	if (_hitpoints == 100)
	{
		std::cout << "FR4G-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitpoints > 100)
		amount = 100 - _hitpoints;
	std::cout << "FR4G-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	if (_hitpoints == 10)
		std::cout << "He's full life !" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FR4G-TP <" << _name << "> \"Heeey ! Give me five bro !\"" << std::endl;
}