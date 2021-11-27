#include "Karen.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong arguments." << std::endl;
		return (1);
	}
	Karen karen;
	karen.complain(av[1]);
}