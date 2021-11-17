#include <iostream>

int		ft_strlen(char *str)
{
	int i;
	
	for (i = 0; str && str[i]; i++);
	return (i);
}

char	ft_toupper(char c)
{
	if (c <= 'z' && c >= 'a')
		return (c - ('a' - 'A'));
	return (c);
}

int     main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; j < ft_strlen(av[i]); j++)
				std::cout << ft_toupper(av[i][j]);
		}
		std::cout << std::endl;
	}
	else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    return (0);
}