/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:06 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:39:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &c): Enemy(c.getHP(), c.getType()) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &c) {
	setHP(c.getHP());
	setType(c.getType());
	return *this;
}

void	SuperMutant::takeDamage(int damage) {
	if (damage >= 3) {
		Enemy::takeDamage(damage - 3);
	}
}
