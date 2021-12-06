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

	std::cout << std::endl;
	try {
		Bureaucrat maurice("Maurice", 130);
		maurice.decrementGrade();
		std::cout << "Grade of Maurice is : " << maurice.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat george("George", 150);
		george.decrementGrade();
		std::cout << "New grade of George is : " << george.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat pierre("Pierre", 0);
		pierre.decrementGrade();
		std::cout << "New grade of Pierre is : " << pierre.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH PIERRE : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat maurice("Maurice", 130);
		maurice.incrementGrade();
		std::cout << "Grade of Maurice is : " << maurice.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat george("George", 1);
		george.incrementGrade();
		std::cout << "New grade of George is : " << george.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat pierre("Pierre", 151);
		pierre.incrementGrade();
		std::cout << "New grade of Pierre is : " << pierre.getGrade() << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH PIERRE : " << e.what() << std::endl;
	}
}

