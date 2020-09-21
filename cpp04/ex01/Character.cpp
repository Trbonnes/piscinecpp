/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:14:56 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 15:05:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const &name): _name(name), _ap(40), _weapon(NULL) {
}

Character::Character(const Character &c): _name(c._name), _ap(c._ap), _weapon(c._weapon) {
}

Character::~Character() {
}

Character &Character::operator=(const Character &c) {
	setAP(c.getAP());
	setName(c.getName());
	equip(c.getWeapon());
	return *this;
}

void	Character::setName(std::string name) {
	_name = name;
}

void	Character::setAP(int ap) {
	_ap = ap;
}

std::string const	Character::getName() const {
	return _name;
}

int					Character::getAP() const {
	return _ap;
}

AWeapon				*Character::getWeapon() const {
	return _weapon;
}

void	Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *weap) {
	_weapon = weap;
}

void	Character::attack(Enemy *vilain) {
	if (_weapon) {
		if (_ap >= _weapon->getAPCost()) {
			std::cout << _name << " attacks " << vilain->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			vilain->takeDamage(_weapon->getDamage());
			_ap -= _weapon->getAPCost();
			if (_ap < 0)
					_ap = 0;
			if (vilain->getHP() <= 0)
				delete vilain;
		}
		else
			std::cout << _name << "does not have enought AP to attack" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Character &c) {
	if (!c.getWeapon()) {
		return out << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	}
	else {
		return out << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	}
}
