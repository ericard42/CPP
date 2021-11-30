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
		maurice->attack(george->getName());
		george->takeDamage(maurice->getAttackDamage());
		maurice->beRepaired(1);
		george->attack(maurice->getName());
		maurice->takeDamage(george->getAttackDamage());
		george->beRepaired(1);
		robert->attack(george->getName());
		george->takeDamage(robert->getAttackDamage());
		robert->beRepaired(1);
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