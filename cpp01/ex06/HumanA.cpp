/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:02:01 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 09:24:42 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << _name << " attack wih his " << _Weapon.getType() << std::endl;
}

std::string	HumanA::getName() const {
	return _name;
}

void	HumanA::setName(std::string name) {
	_name = name;
}

void	HumanA::setWeapon(Weapon &Weapon) {
	_Weapon = Weapon;
}

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name), _Weapon(Weapon) {
}
