/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:39:37 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 13:04:03 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class	Intern {
private:
	struct	fct_ptr {
		std::string _command;
		Form	*(Intern::*fn)(std::string const target);
	};
	static const fct_ptr	fct_tab[3];

	Form	*makeShrubbery(std::string const target);
	Form	*makeRobot(std::string const target);
	Form	*makePresidential(std::string const target);
	Intern &operator=(const Intern &c);
public:
	Intern();
	Intern(const Intern &c);
	/*virtual*/ ~Intern();

	Form	*makeForm(std::string form, std::string target);
};

#endif
