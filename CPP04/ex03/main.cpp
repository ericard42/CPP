#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* ice;
	AMateria* cure;
	AMateria* other;
	ice = src->createMateria("ice");
	me->equip(ice);
	cure = src->createMateria("cure");
	me->equip(cure);
	other = src->createMateria("other");
	me->equip(other);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	me->unequip(2);
	me->unequip(0);
	bob->equip(ice);
	bob->use(0, *me);

	*bob = *me;

	delete bob;
	delete me;
	delete src;

	Character *robert = new Character("Robert");
	Character *george = new Character("George");

	IMateriaSource *test = new MateriaSource;
	test->learnMateria(new Ice());
	AMateria *ice2;
	ice2 = test->createMateria("ice");
	robert->equip(ice2);

	*george = *robert;
	george->use(0, *robert);

	delete robert;
	delete george;
	delete test;

	return 0;
}
