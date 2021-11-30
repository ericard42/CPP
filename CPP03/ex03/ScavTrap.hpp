#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &s);
		ScavTrap &operator=(ScavTrap const &s);

		ScavTrap(std::string name);

		void	guardGate();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:

};

#endif