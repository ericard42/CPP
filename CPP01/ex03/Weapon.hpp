#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstddef>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon{

	public:
		Weapon (std::string type);
		~Weapon (void);

		const std::string& getType (void);
		void		setType(std::string newType);

	private:
		std::string _type;
};

#endif