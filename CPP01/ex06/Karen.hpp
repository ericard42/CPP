#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen{

	private:
		
		void debug (void);
		void info (void);
		void warning (void);
		void error (void);
		void insignificant (void);
		
		int	_level;

	public:
		Karen (void);
		~Karen (void);

		void	complain (std::string level);

};

#endif