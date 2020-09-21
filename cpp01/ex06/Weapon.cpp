/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:50:38 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 16:57:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string	&Weapon::getType() {
	return _type;
}

void		Weapon::setType(std::string type) {
	_type = type;
}

Weapon::Weapon(std::string type) {
	setType(type);
}
