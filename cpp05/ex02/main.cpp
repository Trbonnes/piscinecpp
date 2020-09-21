/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 09:57:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:31:47 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		ShrubberyCreationForm Sf("yard");
		RobotomyRequestForm Rf("Branch Director");
		PresidentialPardonForm Pf("Martin Claudel");
		std::cout << Sf;
		std::cout << Rf;
		std::cout << Pf;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		Sf.beSigned(b1);
		Rf.beSigned(b1);
		Pf.beSigned(b1);
		b1.executeForm(Sf);
		b1.executeForm(Rf);
		b1.executeForm(Pf);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm Sf("yard");
		RobotomyRequestForm Rf("Branch Director");
		PresidentialPardonForm Pf("Martin Claudel");
		std::cout << Sf;
		std::cout << Rf;
		std::cout << Pf;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		Sf.beSigned(b2);
		Rf.beSigned(b2);
		Pf.beSigned(b2);
		b1.executeForm(Sf);
		b1.executeForm(Rf);
		b1.executeForm(Pf);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm Sf("yard");
		RobotomyRequestForm Rf("Branch Director");
		PresidentialPardonForm Pf("Martin Claudel");
		std::cout << Sf;
		std::cout << Rf;
		std::cout << Pf;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		Sf.beSigned(b1);
		Rf.beSigned(b1);
		Pf.beSigned(b1);
		b2.executeForm(Sf);
		b2.executeForm(Rf);
		b2.executeForm(Pf);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm Sf("yard");
		RobotomyRequestForm Rf("Branch Director");
		PresidentialPardonForm Pf("Martin Claudel");
		std::cout << Sf;
		std::cout << Rf;
		std::cout << Pf;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		b1.executeForm(Sf);
		b1.executeForm(Rf);
		b1.executeForm(Pf);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
