#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "<TESTING CREATE>" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat robert("Robert", 130);
		std::cout << robert << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH ROBERT : " << e.what() << std::endl;
	}
	try {
		Bureaucrat george("George", 154);
		std::cout << george << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	try {
		Bureaucrat maurice("Maurice", 0);
		std::cout << maurice << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "<TESTING DECREMENTATION>" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat maurice("Maurice", 130);
		std::cout << maurice << std::endl;
		maurice.decrementGrade();
		std::cout << maurice << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat george("George", 150);
		std::cout << george << std::endl;
		george.decrementGrade();
		std::cout << george << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat pierre("Pierre", 0);
		std::cout << pierre << std::endl;
		pierre.decrementGrade();
		std::cout << pierre << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH PIERRE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "<TESTING INCREMENTATION>" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat maurice("Maurice", 130);
		std::cout << maurice << std::endl;
		maurice.incrementGrade();
		std::cout << maurice << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH MAURICE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat george("George", 1);
		std::cout << george << std::endl;
		george.incrementGrade();
		std::cout << george << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH GEORGE : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat pierre("Pierre", 151);
		std::cout << pierre << std::endl;
		pierre.incrementGrade();
		std::cout << pierre << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << "ERROR WITH PIERRE : " << e.what() << std::endl;
	}
}

