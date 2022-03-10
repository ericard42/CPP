#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

    public:
        Character();
        ~Character();
        Character(Character const &c);
        Character &operator=(Character const &c);

        Character(std::string name);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);

    private :
        std::string _name;
        AMateria	*_materia[4];
		int 		_nbEquipped;

};

#endif
