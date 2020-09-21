/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:37:15 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 15:01:17 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(const Ice &c): AMateria(c) {
}

Ice::~Ice() {
}

Ice &Ice::operator=(const Ice &c) {
	setXp(c.getXp());
	return *this;
}

Ice	*Ice::clone() {
	return new Ice(*this);
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice blot at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
