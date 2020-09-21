#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

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
	virtual ~Form();

	class 	GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	FormNotSigned: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	int					getsignGrade() const;
	int					getexecGrade() const;
	const std::string	getSigned() const;

	bool				isSigned() const;

	void				beSigned(Bureaucrat &b);
	void				executeCheck(const Bureaucrat &b) const ;
	virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &s);

#endif
