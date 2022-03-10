#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "This animal have a brain." << std::endl;
	_lastIdea = 0;
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
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
	std::cout << _lastIdea << " ideas has been copied" << std::endl;
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
	if (_lastIdea == 0)
		std::cout << "...It sound hollow..." << std::endl;
	for (int i = 0; i < _lastIdea; i++)
		std::cout << _ideas[i] << std::endl;
}

