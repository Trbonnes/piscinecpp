/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:53:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:36:56 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45),
_target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c): Form(c), _target(c._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

const std::string	&RobotomyRequestForm::getTarget() const {
	return _target;
}

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	executeCheck(executor);
	std::cout << "Brrrrrrrr... Bzzzzzzzz.... Biiiiiiip..." << std::endl;
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Failure! " << getTarget() << " could not been robotomized!" << std::endl;
}
