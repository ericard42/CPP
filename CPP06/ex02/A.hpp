#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base {
	public:
		A();
		~A();
		A(A const &src);
		A &operator=(A const &src);

	private:

};

#endif
