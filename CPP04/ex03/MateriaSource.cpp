#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	_nbMateria = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &m) {
	*this = m;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m) {
	_nbMateria = m._nbMateria;

	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		if (m._materia[i])
			_materia[i] = m._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (_nbMateria > 4)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			_nbMateria++;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _nbMateria; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return 0;
}
