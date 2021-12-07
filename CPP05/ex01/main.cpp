#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat *george;
	Form *testToLow;
	Form *testGood;

	try {
		george = new Bureaucrat("George", 50);
		std::cout << *george << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		testToLow = new Form("NotGood", 10, 5);
		std::cout << *testToLow << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		testGood = new Form ("Good", 50, 40);
		std::cout << *testGood << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	george->signForm(*testToLow);
	george->signForm(*testGood);
}

