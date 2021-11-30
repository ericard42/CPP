#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ClapTrap *maurice = new ClapTrap("Maurice");
	ScavTrap *george = new ScavTrap("George");

	george->guardGate();
	while (42)
	{
		maurice->attack(george->getName());
		george->takeDamage(maurice->getAttackDamage());
		maurice->beRepaired(1);
		george->attack(maurice->getName());
		maurice->takeDamage(george->getAttackDamage());
		if (maurice->isDead() == 0)
		{
			std::cout << "<" << george->getName() << "> won ! We can destroy everyone." << std::endl;
			delete(maurice);
			delete(george);
			break;
		}
		if (george->isDead() == 0)
		{
			std::cout << "<" << maurice->getName() << "> won ! We can destroy everyone." << std::endl;
			delete(george);
			delete(maurice);
			break;
		}
	}
}