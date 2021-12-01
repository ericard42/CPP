#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *animals[2];
	Brain *brain;

	for (int i = 0; i < 2; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	brain = animals[1]->getBrain();
	brain->addIdea("potato");
	brain->addIdea("oh, squirrel");
	brain->addIdea("*yawn*");

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
}