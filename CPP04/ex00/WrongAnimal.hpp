#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &w);
		WrongAnimal &operator=(WrongAnimal const &w);

		std::string getType() const;
		void	makeSound() const;

	protected :
		std::string _type;

};

#endif