#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("_clap_name"), ScavTrap(""), FragTrap("")
{
	_name = "";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Oh, they merged in a DI4MOND-TP !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DI4MOND-TP <" << _name << "> has downgraded in a CL4P-TP" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Oh, they merged in a DI4MOND-TP !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d)
{
	*this = d;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &d)
{
	_name = d._name;
	_hitPoints = d._hitPoints;
	_energyPoints = d._energyPoints;
	_attackDamage = d._attackDamage;

	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who am I..? I am <" << _name << ">, but also <" << ClapTrap::_name << ">..." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}