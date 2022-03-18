#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main() {
	{
		std::cout << "--- MUTANTSTACK ---" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top :\t" << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size :\t" << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Content :" << std::endl;
		while (it != ite) {
			std::cout << *it << " | ";
			++it;
		}
		std::cout << std::endl;

		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n--- LIST ---" << std::endl;
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "Top :\t" << list.back() << std::endl;

		list.pop_back();

		std::cout << "Size :\t" << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();

		++it;
		--it;

		std::cout << "Content :" << std::endl;
		while (it != ite) {
			std::cout << *it << " | ";
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}