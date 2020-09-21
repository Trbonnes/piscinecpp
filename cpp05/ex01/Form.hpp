#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Form {
private:
	const std::string	_name;
	const int			_signGrade;
	const int			_execGrade;
	bool				_signed;

	Form();
	Form &operator=(const Form &c);
public:
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &c);
	/*virtual*/ ~Form();

	class 	GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	int					getsignGrade() const;
	int					getexecGrade() const;
	const std::string	getSigned() const;

	void				beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, const Form &s);

#endif
