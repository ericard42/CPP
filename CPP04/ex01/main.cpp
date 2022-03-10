#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *animals[2];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	animals[1]->getBrain()->addIdea("potato");
	animals[1]->getBrain()->addIdea("oh, my minion");
	animals[1]->getBrain()->addIdea("*yawn*");
	animals[2]->getBrain()->addIdea("oh, squirrel");
	animals[2]->getBrain()->addIdea("oh, my master !");

	animals[0]->getBrain()->displayIdeas();
	std::cout << std::endl;
	animals[1]->getBrain()->displayIdeas();
	std::cout << std::endl;
	animals[2]->getBrain()->displayIdeas();
	std::cout << std::endl;
	animals[3]->getBrain()->displayIdeas();
	std::cout << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << std::endl;

	 
	Cat	cat = Cat();
	cat.getBrain()->addIdea("Is it time to eat yet ?");
	Cat deepCopy = Cat(cat);
	Brain *brain = cat.getBrain();
	Brain *brain2 = deepCopy.getBrain();
	cat.getBrain()->addIdea("Is it me ?");
	deepCopy.getBrain()->addIdea("No I'm not you, don't worry");

	std::cout << std::endl;
	std::cout << "Adress of first brain = " << &brain << "\nAnd the ideas :"<< std::endl;
	cat.getBrain()->displayIdeas();
	std::cout << std::endl;
	std::cout << "Adress of the deep copy = " << &brain2 << "\nAnd the ideas :" << std::endl;
	deepCopy.getBrain()->displayIdeas();
	std::cout << std::endl;

}