#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DI4MOND-TP <" << _name << "> has downgraded in a CL4P-TP" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "Oh, they merged in a DI4MOND-TP !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d)
{
	*this = d;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &d)
{
	_name = d._name;
	_hitpoints = d._hitpoints;
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