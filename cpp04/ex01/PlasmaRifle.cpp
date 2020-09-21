/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:18:07 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 17:37:21 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &c): AWeapon(c.getName(), c.getAPCost(), c.getDamage()) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &c) {
	setName(c.getName());
	setAPCost(c.getAPCost());
	setDamage(c.getDamage());
	return *this;
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
