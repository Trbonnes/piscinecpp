/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:29:10 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 13:45:07 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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
	return (NAMES[std::rand() % 10]);
}

void	ZombieHorde::announce() {
	for (int i = 0 ; i < _n ; i++)
		_horde[i].advert();
}

ZombieHorde::ZombieHorde(int n) {
	_n = n;
	_horde = new Zombie[_n];

	for (int i = 0 ; i < _n ; i++)
		_horde[i] = Zombie(get_rand_name(), "Horde Zombie");
}

ZombieHorde::~ZombieHorde() {
	delete[] _horde;
}
