#ifndef CPP_MATERIASOURCE_HPP
#define CPP_MATERIASOURCE_HPP

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
};


#endif
