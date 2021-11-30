#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const &f);
		FragTrap &operator=(FragTrap const &f);

		FragTrap(std::string name);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys();

	private:

};

#endif