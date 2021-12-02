#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public :
		Cat();
		~Cat();
		Cat(Cat const &c);
		Cat &operator=(Cat const &c);

		void	makeSound() const;
		Brain	*getBrain() const;

	private :
		Brain *_brain;

};


#endif