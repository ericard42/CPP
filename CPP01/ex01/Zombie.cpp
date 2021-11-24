#include "Zombie.hpp"

Zombie::Zombie (void)
{
	
}

Zombie::~Zombie (void)
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "*Sound of zombie dying...*" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}