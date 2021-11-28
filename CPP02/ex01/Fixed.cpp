#include "Fixed.hpp"

Fixed::Fixed (void) : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (val << this->_bits);
}

Fixed::Fixed (float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(val * (1 << this->_bits));
}

Fixed::Fixed (const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

int	Fixed::toInt (void) const
{
	return (this->_fixedValue >> this->_bits);
}

float	Fixed::toFloat (void) const
{
	return ((float)this->_fixedValue / (1 << this->_bits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits (void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits (int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &f)
{
	return stream << f.toFloat();
}