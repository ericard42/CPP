#include "Bureaucrat.hpp"

int		main()
{
	try {
		Bureaucrat("Robert", 130);
		std::cout << "Everything is okay with Robert" << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH ROBERT : " << e.what() << std::endl;
	}
	try {
		Bureaucrat("George", 154);
		std::cout << "Everything is okay with George" << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat("Maurice", 0);
		std::cout << "Everything is okay with Maurice : " << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
}