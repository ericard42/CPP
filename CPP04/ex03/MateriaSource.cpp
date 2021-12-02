#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

}

MateriaSource::~MateriaSource() {

}

MateriaSource::MateriaSource(MateriaSource const &m) {
	*this = m;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m) {
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {

}

AMateria MateriaSource::createMateria(const std::string &type) {

}