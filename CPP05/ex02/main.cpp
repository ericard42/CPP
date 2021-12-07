#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat *george;

	try {
		george = new Bureaucrat("George", 50);
		std::cout << *george << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	delete george;
}

