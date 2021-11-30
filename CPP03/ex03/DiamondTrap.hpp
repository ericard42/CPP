#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {

	public :
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &d);
		DiamondTrap &operator=(DiamondTrap const &d);

		DiamondTrap (std::string name);

		void	attack(std::string const &target);

		void	whoAmI();

	private :
		std::string		_name;

};

#endif