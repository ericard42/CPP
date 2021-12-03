#include "Character.hpp"

Character::Character() {

}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i]) {
			delete _materia[i];
			_materia[i] = NULL;
		}
	}
	delete _materia;
}

Character::Character(const Character &c) {
	*this = c;
}

Character &Character::operator=(const Character &c) {
	_name = c._name;
	_nbEquipped = 0;
	_materia = new AMateria *[4];
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		_materia[i] = c._materia[i];
		if (c._materia[i])
			_nbEquipped++;
	}
	return (*this);
}

Character::Character(std::string name) : _name(name) {
	_nbEquipped = 0;
	_materia = new AMateria *[4];
	for (int i = 0; i > 4; i++)
		_materia[i] = NULL;
}

std::string const &Character::getName() const {
    return (_name);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			_nbEquipped++;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !_materia[idx])
			return;
	_materia[idx] = NULL;
	_nbEquipped--;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || !_materia[idx])
		return ;
	_materia[idx]->use(target);
	unequip(idx);
}