#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

	public:
		Brain();
		~Brain();
		Brain(Brain const &b);
		Brain &operator=(Brain const &b);

		void	addIdea(std::string const idea);
		void	displayIdeas();

	private:
		std::string 	_ideas[100];
		int				_lastIdea;

};

#endif