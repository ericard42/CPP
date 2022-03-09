#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "CL4P-TP <" << _name << "> has upgraded in a FR4G-TP !" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "CL4P-TP <" << _name << "> has upgraded in a FR4G-TP !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << _name << "> has downgraded in a CL4P-TP !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f)
{
	*this = f;
}

FragTrap &FragTrap::operator=(FragTrap const &f)
{
	_name = f._name;
	_attackDamage = f._attackDamage;
	_energyPoints = f._energyPoints;
	_hitPoints = f._hitPoints;

	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> don't have enough energy to attack." << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't attack because he's dead..." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FR4G-TP <" << _name << "> attacks <";
	std::cout << target << ">, causing <" << _attackDamage;
	std::cout << "> points of damage !" << std::endl;
	std::cout << "\tHe have <" << _energyPoints << "> energy points." << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't take damage because he's dead..." << std::endl;
		return;
	}
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout << "FR4G-TP <" << _name << "> has been attack !" << std::endl;
	std::cout << "\tHe takes <" << amount << "> points of damage ! \"Not nice...\"" << std::endl;
	std::cout << "\tHe have <" << _hitPoints << "> life points" << std::endl;
	if (_hitPoints == 0)
		std::cout << "\tHe's dead..." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "FR4G-TP <" << _name << "> can't be heal because he's dead..." << std::endl;
		return;
	}
	if (_hitPoints == 100)
	{
		std::cout << "FR4G-TP <" << _name << "> is already full life !" << std::endl;
		return ;
	}
	if (amount + _hitPoints > 100)
		amount = 100 - _hitPoints;
	std::cout << "FR4G-TP <" << _name << "> heals <" << amount << "> points of damage !" << std::endl;
	_energyPoints--;
	if (_hitPoints < 100)
		std::cout << "\tHe have <" << _hitPoints << "> life point and <" << _energyPoints << "> energy points." << std::endl;
	if (_hitPoints == 100)
		std::cout << "\tHe's full life !" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FR4G-TP <" << _name << "> \"Heeey ! Give me five bro !\"" << std::endl;
}