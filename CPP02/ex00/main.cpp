#include "Fixed.hpp"

Fixed::Fixed (void) : _fixedValue(1)
{

}

Fixed::~Fixed (void)
{

}

Fixed::Fixed (const Fixed &f) : _fixedValue(f._fixedValue)
{

}