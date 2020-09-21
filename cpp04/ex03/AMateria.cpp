/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:24:04 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:20:42 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const &type): _type(type), _xp(0) {
}

AMateria::AMateria(const AMateria &c): _type(c._type), _xp(c._xp) {
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(const AMateria &c) {
	this->setType(c.getType());
	this->setXp(c.getXp());
	return *this;
}

std::string const	&AMateria::getType() const {
	return _type;
}

unsigned int		AMateria::getXp() const {
	return _xp;
}

void				AMateria::setType(std::string type) {
	_type = type;
}

void				AMateria::setXp(unsigned int xp) {
	_xp = xp;
}

void				AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}
