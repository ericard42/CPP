#include "Fixed.hpp"

Fixed::Fixed (void) : _fixedValue(0)
{

}

Fixed::~Fixed (void)
{

}

Fixed::Fixed (int const val)
{
	this->_fixedValue = (val << Fixed::_bits);
}

Fixed::Fixed (float const val)
{
	this->_fixedValue = roundf(val * (1 << Fixed::_bits));
}

Fixed::Fixed (const Fixed &f)
{
	*this = f;
}

int	Fixed::toInt (void) const
{
	return (this->_fixedValue >> Fixed::_bits);
}

float	Fixed::toFloat (void) const
{
	return ((float)this->_fixedValue / (1 << Fixed::_bits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	this->_fixedValue = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits (void) const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits (int const raw)
{
	this->_fixedValue = raw;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &f)
{
	return (stream << f.toFloat());
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

bool	Fixed::operator>(Fixed const &f) const
{
	return (this->toFloat() > f.toFloat());
}

bool	Fixed::operator<(Fixed const &f) const
{
	return (this->toFloat() < f.toFloat());
}

bool	Fixed::operator>=(Fixed const &f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator<=(Fixed const &f) const
{
	return (this->toFloat() <= f.toFloat());
}

bool	Fixed::operator==(Fixed const &f) const
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator!=(Fixed const &f) const
{
	return (this->toFloat() != f.toFloat());
}

Fixed	Fixed::operator+(Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_fixedValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);

	this->_fixedValue++;
	return (ret);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixedValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed ret(*this);

	this->_fixedValue--;
	return (ret);
}
