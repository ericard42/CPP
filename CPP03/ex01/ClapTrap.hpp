#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &c);
		ClapTrap &operator=(ClapTrap const &c);

		ClapTrap(std::string name);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	isDead();

	private:
		std::string _name;
		unsigned int	_hitpoints;
		unsigned int	_ennergyPoints;
		unsigned int	_attackDamage;

};

#endif