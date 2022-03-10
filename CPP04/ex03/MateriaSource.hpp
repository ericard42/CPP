#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &m);
		MateriaSource &operator=(MateriaSource const &m);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

	private :
		AMateria	*_materia[4];
		int 		_nbMateria;
};

#endif
