/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 08:13:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 14:45:03 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat {
private:
	std::string const	_name;
	int					_grade;
	
	Bureaucrat &operator=(const Bureaucrat &c);
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &c);
	/*virtual*/ ~Bureaucrat();

	class 	GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	FormAlreadySigned: public std::exception {
	public:
		virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	int					getGrade() const;

	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form &form);
	void				executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &s);

#endif
