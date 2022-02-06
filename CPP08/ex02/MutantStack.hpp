#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename type>
	class MutantStack : public std::stack<type> {
	public :

		typedef typename std::deque<type>::iterator iterator;

		MutantStack() : std::stack<type>() {}
		~MutantStack() {}
		MutantStack(MutantStack const &src) {*this = src;}
		MutantStack &operator=(MutantStack const &src) {
			this->c = src.c;
			return *this;
		}

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}

	private :
};


#endif
