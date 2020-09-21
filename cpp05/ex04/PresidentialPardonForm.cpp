/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:02:44 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:36:40 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5),
_target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c): Form(c), _target(c._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

const std::string	&PresidentialPardonForm::getTarget() const {
	return _target;
}

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	executeCheck(executor);
	std::cout << _target << " as been pardoned by Zafod Beeblebrox." << std::endl;
}
