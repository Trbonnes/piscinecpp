/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:39:39 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 13:12:56 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const	Intern::fct_ptr Intern::fct_tab[3] = {
	{"presidential pardon", &Intern::makePresidential},
	{"robotomy request", &Intern::makeRobot},
	{"shrubbery creation", &Intern::makeShrubbery}
};

Intern::Intern() {
}

Intern::Intern(const Intern &c) {
(void)c;
}

Intern::~Intern() {
}

Form	*Intern::makeShrubbery(std::string const target){
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeRobot(std::string const target){
	return new RobotomyRequestForm(target);
}

Form	*Intern::makePresidential(std::string const target){
	return new PresidentialPardonForm(target);
}


Form	*Intern::makeForm(std::string form, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (form == Intern::fct_tab[i]._command) {
			std::cout << "Intern creates " << fct_tab[i]._command << " form." << std::endl;
			return (this->*fct_tab[i].fn)(target);
		}
	}
	std::cout << "The Intern got wrong instructions!" << std::endl;
	return NULL;
}
