#include "Zombie.hpp"

Zombie::Zombie (void)
{
	
}

Zombie::~Zombie (void)
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "*Sound of zombie dying...*" << std::endl;
}

Zombie::Zombie (std::string name)
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}