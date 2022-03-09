#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	ClapTrap *maurice = new ClapTrap("Maurice");
	ScavTrap *george = new ScavTrap("George");
	FragTrap *robert = new FragTrap("Robert");

	george->guardGate();
	robert->highFivesGuys();
	while (42)
	{
		maurice->attack(robert->getName()); //Claptrap Attack
		robert->takeDamage(maurice->getAttackDamage()); //Fragtrap takeDamage
		robert->beRepaired(1); //Fragtrap Repair
		george->attack(maurice->getName()); //Scavtrap attack
		maurice->takeDamage(george->getAttackDamage()); //Claptrap takeDamage
		maurice->beRepaired(1); //Claptrap Repair
		robert->attack(george->getName()); //Fragtrap attack
		george->takeDamage(robert->getAttackDamage()); //Scavtrap takeDamage
		george->beRepaired(5); //Scavtrap Repair
		if (maurice->isDead() == 0 || george->isDead() == 0 || robert->isDead())
		{
			std::cout << "\nSomeone is dead ! We can destroy everyone." << std::endl;
			delete(robert);
			delete(maurice);
			delete(george);
			break;
		}
	}
}