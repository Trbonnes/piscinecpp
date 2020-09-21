/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 09:32:33 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 14:49:09 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade),
_execGrade(execGrade), _signed(false) {
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &c): _name(c._name), _signGrade(c._signGrade),
_execGrade(c._execGrade), _signed(false) {
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
}

const std::string	&Form::getName() const{ 
	return _name;
}

int					Form::getsignGrade() const {
	return _signGrade;
}

int					Form::Form::getexecGrade() const{ 
	return _execGrade;
}

const std::string	Form::getSigned() const {
	if (_signed)
		return "signed";
	return "not signed";
}

void				Form::beSigned(Bureaucrat &b){
	if (b.getGrade() <= _signGrade) {
		_signed = true;
	}
	else 
		throw Bureaucrat::GradeTooLowException();
}

bool				Form::isSigned() const {
	return _signed;
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "The Form grade is too High!";
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "The Form grade is too Low!";
}

const char	*Form::FormNotSigned::what() const throw() {
	return "The Form is not signed, cannot execute it!";
}

std::ostream &operator<<(std::ostream &out, const Form &s) {
	return out << "Form " << s.getName() << " with a grade for signature of " << s.getsignGrade()
	<< " and a grade for execution of " << s.getexecGrade()
	<< " wich is " << s.getSigned() << "." << std::endl;
}

void				Form::executeCheck(const Bureaucrat &b) const {
	if (!_signed)
		throw Form::FormNotSigned();
	if (b.getGrade() > _execGrade)
		throw Bureaucrat::GradeTooLowException();
}
