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
	std::string input;

	std::cout << "First Name : ";
	std::cin >> input;
	this->_firstName = input;

	std::cout << "Last Name : ";
	std::cin >> input;
	this->_lastName = input;

	std::cout << "Nickname : ";
	std::cin >> input;
	this->_nickname = input;

	std::cout << "Phone Numer : ";
	std::cin >> input;
	this->_phoneNumber = input;

	std::cout << "Darkest Secret : ";
	std::cin >> input;
	this->_darkestSecret = input;

	this->_isEmpty = false;
}