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

bool	isNumber(std::string str)
{
	const char *ch = str.c_str();

	if (std::isdigit(*ch) == 0)
		return (false);
	return (true);
}

int	choose_index(int i)
{
	std::string input;

	std::cout << "Choose an index beween 0 and " << i - 1 << " : ";
	std::getline(std::cin, input);
	int index;
	if (input.length() != 1)
		index = -1;
	else if (isNumber(input) == false)
		index = -1;
	else
		index = atoi(input.c_str());
	if (index < 0 || index > (i - 1))
		return (-1);
	else
		return (index);
}

void	search_input(Contact *contact)
{
	int i;

	i = 0;
	while (i < 8 && contact[i].check_isEmpty() == false)
		i++;
	if (i == 0)
	{
		std::cout << "Your Phone Book is empty... Add someone !" << std::endl;
		return ;
	}
	std::cout << "*********************************************" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	i = 0;
	while (i < 8 && contact[i].check_isEmpty() == false)
	{
		std::cout << "|         " << i << "|";
		contact[i].display_firstName();
		std::cout << "|";
		contact[i].display_lastName();
		std::cout << "|";
		contact[i].display_nickname();
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "*********************************************" << std::endl;
	int index = choose_index(i);
	if (index == -1)
		std::cout << "This is not a valid index. Back to main menu." << std::endl;
	else
		contact[index].display_contact();
}

int		main()
{
	std::string inputUser;
	Contact		contact[8];

	std::cout << "Welcome on your Phone Book !" << std::endl;

	while (inputUser != "EXIT")
	{	
		std::cout << "Choose a command : [ADD] - [SEARCH] - [EXIT]" << std::endl;
		std::getline(std::cin, inputUser);
		if (inputUser == "ADD")
			add_input(contact);
		else if (inputUser == "SEARCH")
			search_input(contact);
	}
	std::cout << "See you soon ! :)" << std::endl;
	return (0);
}
