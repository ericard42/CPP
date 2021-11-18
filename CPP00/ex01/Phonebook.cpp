#include "Contact.hpp"

void	add_input(Contact *contact)
{
	int i;

	i = 0;
	while (i < 8 && contact[i].check_isEmpty() == false)
		i++;
	if (i == 8)
		std::cout << "Your Phone Book is full... :(" << std::endl;
	else
		contact[i].add_contact();
}

void	search_input(Contact *contact)
{

}

int		main()
{
	std::string inputUser;
	Contact		contact[8];

	std::cout << "Welcome on your Phone Book !" << std::endl;

	while (inputUser != "EXIT")
	{	
		std::cout << "Choose a command : [ADD] - [SEARCH] - [EXIT]" << std::endl;
		std::cin >> inputUser;
		if (inputUser == "ADD")
			add_input(contact);
		else if (inputUser == "SEARCH")
			search_input(contact);
		else if (inputUser != "EXIT")
			std::cout << "Sorry, this command doesn't exist..." << std::endl;
	}
	std::cout << "See you soon ! :)" << std::endl;
	return (0);
}
