/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:57:50 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 13:33:57 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string	NAMES[] = {
	"Teketeke",
	"Kuchisake_Onna",
	"Nopperabbo",
	"Yukki_Onna",
	"Sodemogi",
	"Gashadokuro",
	"Tsuchogumo",
	"Amanojaku",
	"Nue",
	"Kappa"
};

std::string	get_rand_name() {
	std::srand(time(NULL));
	return (NAMES[std::rand() % 10]);
}

void	ZombieEvent::randomChump() {
	Zombie new_zombie(get_rand_name(), _type);
	new_zombie.advert();
}

void	ZombieEvent::setZombieType(std::string type) {
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, _type);
}

ZombieEvent::ZombieEvent(std::string type) {
	_type = type;
}
