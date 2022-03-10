#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog* dogo = new Dog();
	const Cat* cato = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " in Animal goes ";
	j->makeSound();
	std::cout << i->getType() << " in Animal goes ";
	i->makeSound();
	std::cout << "Animal goes... ";
	meta->makeSound();
	std::cout << dogo->getType() << " in Dog goes ";
	dogo->makeSound();
	std::cout << cato->getType() << " in Cat goes ";
	cato->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete dogo;
	delete cato;

	std::cout << std::endl;
	
	const WrongAnimal *uh = new WrongAnimal();
	const WrongAnimal *meouaf = new WrongCat();
	const WrongCat *miaou = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongAnimal in WrongAnimal\n\t";
	uh->makeSound();
	std::cout << "WrongCat in WrongAnimal\n\t";
	meouaf->makeSound();
	std::cout << "WrongCat in WrongCat\n\t";
	miaou->makeSound();
	std::cout << std::endl;

	delete uh;
	delete meouaf;
	delete miaou;
}