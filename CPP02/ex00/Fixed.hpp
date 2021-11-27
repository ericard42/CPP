#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{

	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const Fixed &f);

	private:
		int					_fixedValue;
		static const int	_bits = 8;
};

#endif