#include "MateriaSource.hpp"

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

MateriaSource::MateriaSource() {
	_materia = materiaInit();
	_nbMateria = 0;
}

MateriaSource::~MateriaSource() {
	materiaClean(_materia);
	delete[] _materia;
}

MateriaSource::MateriaSource(MateriaSource const &m) {
	*this = m;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m) {
	_nbMateria = m._nbMateria;

	materiaClean(_materia);
	delete[] _materia;
	_materia = materiaCopy(m._materia);

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
	return NULL;
}