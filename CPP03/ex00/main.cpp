#include "ClapTrap.hpp"

int		main()
{
	ClapTrap *maurice = new ClapTrap("Maurice");

	while (42)
	{
		maurice->attack("Robert");
		maurice->beRepaired(1);
		maurice->takeDamage(4);
		if (maurice->isDead() == 0)
		{
			delete(maurice);
			break;
		}
	}
}