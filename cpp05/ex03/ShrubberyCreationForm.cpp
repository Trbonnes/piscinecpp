/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:16:27 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:38:11 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137),
_target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c): Form(c), _target(c._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

const std::string	&ShrubberyCreationForm::getTarget() const {
	return _target;
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	executeCheck(executor);
	std::ofstream	file_stream(_target);
	file_stream << "	            ,@@@@@@@,                " << std::endl;
	file_stream << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    " << std::endl;
	file_stream << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o   " << std::endl;
	file_stream << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'  " << std::endl;
	file_stream << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'  " << std::endl;
	file_stream << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'   " << std::endl;
	file_stream << "   `&%\\ ` /%&'    |.|        \\ '|8'     " << std::endl;
	file_stream << "       |o|        | |         | |       " << std::endl;
	file_stream << "       |.|        | |         | |       " << std::endl;
	file_stream << "    __/   \\______/   \\_______/   \\______" << std::endl;
}
