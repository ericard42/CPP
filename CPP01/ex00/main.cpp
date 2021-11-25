#include "Zombie.hpp"

int		main()
{
	Zombie *maurice;
	maurice = newZombie("Maurice");
	maurice->announce();
	delete(maurice);

	Zombie *george;
	george = newZombie("George");
	randomChump("Kevin");
	george->announce();

	randomChump("Robert");
	delete(george);

	return (0);
}