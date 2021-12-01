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

	std::cout << j->getType() << " goes ";
	j->makeSound();
	std::cout << i->getType() << " goes ";
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	
	const WrongAnimal *uh = new WrongAnimal();
	const WrongAnimal *meouaf = new WrongCat();

	uh->makeSound();
	meouaf->makeSound();

	delete uh;
	delete meouaf;
}