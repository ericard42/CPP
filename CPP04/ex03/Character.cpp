#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string name) : _name(name) {
	_nbEquipped = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

Character::Character(const Character &c) {
	*this = c;
}

Character &Character::operator=(const Character &c) {
	
	_name = c._name;
	_nbEquipped = c._nbEquipped;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		if (c._materia[i])
			_materia[i] = c._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const {
    return (_name);
}

void Character::equip(AMateria *m) {
	if (!m || _nbEquipped >= 4)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == m)
			return ;
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
}
