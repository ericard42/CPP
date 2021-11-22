#include "Contact.hpp"

Contact::Contact() {
	this->_isEmpty = true;
}

Contact::~Contact() {

}

bool	Contact::check_isEmpty(void)
{
	return (this->_isEmpty);
}

void	Contact::add_contact()
{
	while (this->_firstName == "")
	{
		std::cout << "First Name : ";
		std::getline(std::cin, this->_firstName);
	}	

	while (this->_lastName == "")
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, this->_lastName);
	}

	while (this->_nickname == "")
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, this->_nickname);
	}

	while (this->_phoneNumber == "")
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, this->_phoneNumber);
	}

	while (this->_darkestSecret == "")
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, this->_darkestSecret);
	}

	this->_isEmpty = false;
}

std::string display_data(std::string data)
{
	int	l;
	std::string str;

	l = data.length();
	if (l > 10)
	{
		str = data.insert(9, ".");
		str = str.substr(0, 10);
	}
	else
	{
		int i;
		for (i = 0; i < (10 - l); i++)
			str = str.insert(i, " ");
		str = str.insert(i, data);
	}
	return (str);
}

void	Contact::display_firstName()
{
	std::cout << display_data(this->_firstName);
}

void	Contact::display_lastName()
{
	std::cout << display_data(this->_lastName);
}

void	Contact::display_nickname()
{
	std::cout << display_data(this->_nickname);
}

void	Contact::display_contact()
{
	std::cout << "    First Name : " << this->_firstName << std::endl;
	std::cout << "     Last Name : " << this->_lastName << std::endl;
	std::cout << "      Nickname : " << this->_nickname << std::endl;
	std::cout << "  Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
}