#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const Fixed &f);
		Fixed &operator=(const Fixed &f);

		Fixed (int const val);
		Fixed (float const val);

		int		getRawBits (void) const;
		void	setRawBits (int const raw);
		float	toFloat (void) const;
		int		toInt (void) const;


	private:
		int					_fixedValue;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &n);


#endif