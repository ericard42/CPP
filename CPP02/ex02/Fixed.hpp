#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const Fixed &f);
		Fixed	&operator=(const Fixed &f);

		Fixed (int const val);
		Fixed (float const val);

		bool	operator>(Fixed const &f) const;
		bool	operator<(Fixed const &f) const;
		bool	operator>=(Fixed const &f) const;
		bool	operator<=(Fixed const &f) const;
		bool	operator==(Fixed const &f) const;
		bool	operator!=(Fixed const &f) const;

		Fixed	operator+(Fixed const &f);
		Fixed	operator-(Fixed const &f);
		Fixed	operator*(Fixed const &f);
		Fixed	operator/(Fixed const &f);

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits (void) const;
		void	setRawBits (int const raw);
		float	toFloat (void) const;
		int		toInt (void) const;

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);


	private:
		int					_fixedValue;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &n);

#endif