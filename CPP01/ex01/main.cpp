#include "Zombie.hpp"

int	main()
{
	Zombie *zombieHorde1 = zombieHorde(3, "");
	for (int i = 0; i < 3; i++)
		zombieHorde1[i].announce();
	
	std::cout << std::endl;

	Zombie *zombieHorde2 = zombieHorde(5, "Michel");
	for (int i = 0; i < 5; i++)
		zombieHorde2[i].announce();

	std::cout << std::endl;

	delete [] zombieHorde1;
	std::cout << std::endl;
	delete [] zombieHorde2;
}