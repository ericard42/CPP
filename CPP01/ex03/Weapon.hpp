#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{

	private:
		std::string _type;

	public:
		Weapon (void);
		~Weapon (void);
		Weapon(std::string type);

		std::string	getType(void) const;
		void		setType(const std::string &newType);

};

#endif