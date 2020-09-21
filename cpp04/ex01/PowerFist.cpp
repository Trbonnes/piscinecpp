/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:15 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:16 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist &c): AWeapon(c.getName(), c.getAPCost(), c.getDamage()) {
}

PowerFist::~PowerFist() {
}

PowerFist &PowerFist::operator=(const PowerFist &c) {
	setName(c.getName());
	setAPCost(c.getAPCost());
	setDamage(c.getDamage());
	return *this;
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
