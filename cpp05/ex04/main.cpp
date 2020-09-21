/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:30:37 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 14:42:17 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

int main() {
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 12);
		OfficeBlock Office(Dumbass, b2, b1);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 150);
		OfficeBlock Office(Dumbass, b2, b1);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 12);
		OfficeBlock Office;

		Office.setNewIntern(Dumbass);
		Office.setNewSigning(b2);
		Office.setNewExecutor(b1);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 12);
		OfficeBlock Office;

		Office.setNewSigning(b2);
		Office.setNewExecutor(b1);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 12);
		OfficeBlock Office;

		Office.setNewIntern(Dumbass);
		Office.setNewExecutor(b1);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Intern Dumbass;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 12);
		OfficeBlock Office;

		Office.setNewIntern(Dumbass);
		Office.setNewSigning(b2);

		Office.doBureaucracy("robotomy request", "Bender");
		Office.doBureaucracy("presidential pardon", "Bender");
		Office.doBureaucracy("shrubbery creation", "Bender");
		Office.doBureaucracy("coffee", "Bender");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}