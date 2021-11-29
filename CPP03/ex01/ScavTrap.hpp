#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap{

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &s);
		ScavTrap &operator=(ScavTrap const &s);

		ScavTrap(std::string name);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	isDead();

	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_ennergyPoints;
		unsigned int	_attackDamage;

};

#endif