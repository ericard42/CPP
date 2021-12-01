#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main()
{
	DiamondTrap	michel("Michel");

	michel.whoAmI();
	michel.attack("Lui");
	michel.guardGate();
	michel.highFivesGuys();
}