/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:12:04 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:36:07 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"

Asteroid::Asteroid() {
}

Asteroid::Asteroid(const Asteroid &c) {
	(void)c;
}

Asteroid::~Asteroid() {
}

Asteroid &Asteroid::operator=(const Asteroid &c) {
	(void)c;
	return *this;
}

std::string	Asteroid::beMined(DeepCoreMiner *miner) const {
	(void)miner;
	return "Dragonite";
}

std::string	Asteroid::beMined(StripMiner *miner) const {
	(void)miner;
	return "Flavium";
}

std::string	Asteroid::getName() const {
	return "Asteroid";
}


