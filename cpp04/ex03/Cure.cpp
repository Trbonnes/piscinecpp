/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:43:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 15:01:14 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(const Cure &c): AMateria(c) {
}

Cure::~Cure() {
}

Cure &Cure::operator=(const Cure &c) {
	setXp(c.getXp());
	return *this;
}

Cure	*Cure::clone() {
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
