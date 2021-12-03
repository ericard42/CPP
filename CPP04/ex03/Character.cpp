#include "Character.hpp"

static AMateria **materiaInit() {
	AMateria **ret = new AMateria *[4];
	for (int i = 0; i < 4; i++)
			ret[i] = NULL;
	return ret;
}

static AMateria **materiaCopy(AMateria **src) {
	AMateria **ret = new AMateria *[4];
	for (int i = 0; i < 4; i++)
		ret[i] = src[i];
	return (ret);
}

static void materiaClean(AMateria **src) {
	if (src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (src[i])
			{
				delete src[i];
				src[i] = NULL;
			}
		}
	}
}

Character::Character() {

}

Character::~Character() {
	materiaClean(_materia);
	delete[] _materia;
}

Character::Character(const Character &c) {
	*this = c;
}

Character &Character::operator=(const Character &c) {
	_name = c._name;
	_nbEquipped = c._nbEquipped;

	materiaClean(_materia);
	delete[] _materia;
	_materia = materiaCopy(c._materia);

	return (*this);
}

Character::Character(std::string name) : _name(name) {
	_nbEquipped = 0;
	_materia = materiaInit();
}

std::string const &Character::getName() const {
    return (_name);
}

void Character::equip(AMateria *m) {
	if (!m || _nbEquipped >= 4)
		return ;
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
}