#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

Base *generate(void)
{
	switch (rand() % 3)
	{
		case 0 :
				std::cout << "Generate A" << std::endl;
				return (new A);
		case 1 :
				std::cout << "Generate B" << std::endl;
				return (new B);
		default :
				std::cout << "Generate C" << std::endl;
				return (new C);
	}
}

void	identify(Base *p)
{
	//Retourne NULL si le cast ne fonctionne pas (Pointeur)

	Base *base = dynamic_cast<A*>(p);
	if (base != NULL) {
		std::cout << "It's A" << std::endl;
		return ;
	}
	base = dynamic_cast<B*>(p);
	if (base != NULL) {
		std::cout << "It's B" << std::endl;
		return;
	}
	base = dynamic_cast<C*>(p);
	if (base != NULL) {
		std::cout << "It's C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	//Lève une exception si le cast ne fonctionne pas (Référence)

	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It's A" << std::endl;
		return ;
	}
	catch (std::exception &e) {
	}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "It's B" << std::endl;
		return ;
	}
	catch (std::exception &e) {
	}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "It's C" << std::endl;
		return ;
	}
	catch (std::exception &e) {
	}
}

int	main()
{
	srand(time(NULL));

	Base *random = generate();
	std::cout << "Find type with Pointer :" << std::endl;
	identify(random);
	std::cout << "Find type with Reference :" << std::endl;
	identify(*random);
	delete random;
}

//Ne convertit QUE les pointeurs (Ou référence) entre eux.
//Permet de convertir entre les héritages d'une classe.