#ifnedef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

	protected:
		std::string	_type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &a);
		AMateria &operator=(AMateria const &a)

		AMateria(std::string const &type);

		std::string const &getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

};

#endif