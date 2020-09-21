/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:27:40 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 10:17:00 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() {
	if (_Weapon)
		std::cout << _name << " attack wih his " << _Weapon->getType() << std::endl;
	else
		std::cout << _name << " attack wih his bare fist"  << std::endl;
}

std::string	HumanB::getName() const {
	return _name;
}

void	HumanB::setName(std::string name) {
	_name = name;
}

void	HumanB::setWeapon(Weapon &Weapon) {
	_Weapon = &Weapon;
}

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL){
}
