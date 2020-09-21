/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 08:13:15 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:39:27 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &c): _name(c._name), _grade(c._grade) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

const std::string	&Bureaucrat::getName() const {
	return _name;
}

int					Bureaucrat::getGrade() const {
	return _grade;
}

void				Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void				Bureaucrat::signForm(int i, std::string formName){
	if (i == 0)
		std::cout << _name << " signs " << formName << "." << std::endl;
	else if (i == 1)
		std::cout << _name << " cannot signs " << formName << " because his grade is too low." << std::endl;
	else if (i == 2)
		std::cout << _name << " cannot signs " << formName << " because the form is already signed." << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "The Bureaucrat's grade is too High!";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "The Bureaucrat's grade is too Low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &s) {
	return out << "Bureaucrat " << s.getName() << " with a grade of " << s.getGrade() << "." << std::endl;
}
