#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_materia = new AMateria() *[4];
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	_nbMateria = 0;
}

MateriaSource::~MateriaSource() {
	if (!_materia)
		return;
	for (int i = 0; i < 4; i++) {
		if (_materia[i]) {
			delete _materia[i];
			_materia[i] = NULL
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const &m) {
	*this = m;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m) {
	for (int i = 0; i < 4; i++) {
		delete _materia[i];
		_materia[i] = NULL
	}
	delete _materia;
	_materia = new AMateria() *[4]
	for (int i = 0; i < 4; i++)
		_materia[i] = m._materia[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (_nbMateria > 4)
		return ;
	for (int i = 0; i < 4; i++) {
		if (!_materia[i]) {
			_materia[i] = m;
			_nbMateria++;
			break;
		}
	}
}

AMateria MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _nbMateria; i++) {
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return NULL;
}