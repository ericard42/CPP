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
	int i;
	std::string input;

	i = 0;
	while (i < 8 && contact[i].check_isEmpty() == false)
		i++;
	if (i == 0)
	{
		std::cout << "Your Phone Book is empty... Add someone !" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "*********************************************" << std::endl;
	i = 0;
	while (i < 8 && contact[i].check_isEmpty() == false)
	{
		std::cout << "|         " << i << "|";
		//first name
		std::cout << "|";
		//last name
		std::cout << "|";
		//nickname
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "Choose an index beween 0 and " << i - 1 << " : ";
	std::cin >> input;
	int index;
	if (input.length() != 1)
		index = -1;
	else
		index = atoi(input.c_str());
	//Lettre fonctionne. Tenter de refaire soi-meme.
	if (index < 0 || index > (i - 1))
		std::cout << "This is not a valid index. Back to main menu." << std::endl;
	else
		std::cout << "prout" << std::endl;

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
	}
	std::cout << "See you soon ! :)" << std::endl;
	return (0);
}
