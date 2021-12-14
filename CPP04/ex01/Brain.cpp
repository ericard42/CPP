#include "Brain.hpp"

Brain::Brain()
{
	_lastIdea = 0;
}

Brain::~Brain()
{
	for (int i = 0; i < _lastIdea; i++)
		_ideas[i] = "";
}

Brain::Brain(Brain const &b)
{
	*this = b;
}

Brain &Brain::operator=(Brain const &b)
{
	_lastIdea = b._lastIdea;
	for (int i = 0; i < _lastIdea; i++)
		_ideas[i] = b._ideas[i];
	std::cout << _lastIdea << " ideas have been copied" << std::endl;
	return (*this);
}

void	Brain::addIdea(std::string const idea)
{
	if (_lastIdea == 100)
		std::cout << "Brain is full !" << std::endl;
	else {
		_ideas[_lastIdea] = idea;
		_lastIdea++;
	}
}

void	Brain::displayIdeas()
{
	for (int i = 0; i < _lastIdea; i++)
		std::cout << _ideas[i] << std::endl;
}

