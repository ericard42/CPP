#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public :
		Cure();
		~Cure();
		Cure(Cure const &c);
		Cure &operator=(Cure const &c);

		AMataeria *clone() const;
		void use (ICharacter &target);

	private :

}

#endif