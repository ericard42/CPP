#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &w);
		WrongCat &operator=(WrongCat const &w);

		void	makeSound() const;

	private:

};

#endif