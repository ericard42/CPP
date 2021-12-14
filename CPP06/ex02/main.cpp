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
		case 0 : return (new A);
		case 1 : return (new B);
		default : return (new C);
	}
}

void	identify(Base *p)
{
	A *a;
	if ((a = dynamic_cast<A*>(p))) {
		std::cout << "It's A" << std::endl;
		return ;
	}
	B *b;
	if ((b = dynamic_cast<B*>(p))) {
		std::cout << "It's B" << std::endl;
		return;
	}
	C *c;
	if ((c = dynamic_cast<C*>(p))) {
		std::cout << "It's C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It's A";
		return ;
	}
	catch (std::exception &e) {
		(void)e;
	}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "It's B";
		return ;
	}
	catch (std::exception &e) {
		(void)e;
	}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "It's C";
		return ;
	}
	catch (std::exception &e) {
		(void)e;
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
