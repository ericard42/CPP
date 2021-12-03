#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

	public:
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);

		Bureaucrat(std::string const name, int note);

		void 	incrementGrade();
		void 	decrementGrade();

		std::string const &getName() const;
		int 		getGrade() const;

	private:
		std::string const	_name;
		int	_grade;

};


#endif
