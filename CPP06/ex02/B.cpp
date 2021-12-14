#include "B.hpp"

B::B() {
}

B::~B() {
}

B::B(B const &src) {
	*this = src;
}

B &B::operator=(B const &src) {
	(void)src;
	return (*this);
}