#ifndef ICE_HPP
# define ICE_HPP

#include "AMataeria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		~Ice();
		Ice(Ice const &i);
		Ice &operator=(Ice const &i);

		AMataeria *clone() const;
		void use (ICharacter &target);

	private:

}


#endif