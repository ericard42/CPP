#include "Karen.hpp"

#include "Karen.hpp"

Karen::Karen (void)
{

}

Karen::~Karen (void)
{

}

void	Karen::complain(std::string level)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	this->_level = 4;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			this->_level = i;
	}

	while (this->_level >= 0)
	{
		switch (this->_level){
			case 0: this->debug(); break;
			case 1: this->info(); break;
			case 2: this->warning(); break;
			case 3: this->error(); break;
			default: this->insignificant(); break;
		}
		if (this->_level < 3)
			this->_level++;
		else
			break;
	}
}

void	Karen::debug (void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon or my 7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl;
	std::cout << "I just love it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info (void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning (void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error (void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::insignificant (void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::cout << std::endl;
}