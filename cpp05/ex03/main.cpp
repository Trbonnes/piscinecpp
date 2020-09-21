/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:08:22 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 13:10:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Intern someRandomIntern;
    Form *rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("coffee", "Bender");
    delete rrf;
}