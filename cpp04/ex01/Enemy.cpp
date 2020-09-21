/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 10:25:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type) {
}

Enemy::Enemy(const Enemy &c): _hp(c._hp), _type(c._type) {
}

Enemy::~Enemy() {
}

Enemy &Enemy::operator=(const Enemy &c) {
	_hp = c._hp;
	_type = c._type;
	return *this;
}

void	Enemy::setHP(int hp) {
	_hp = hp;
}

void	Enemy::setType(std::string type) {
	_type = type;
}

int		Enemy::getHP() const {
	return _hp;
}

std::string	Enemy::getType() const {
	return _type;
}

void	Enemy::takeDamage(int damage) {
	if (damage > 0) {
		_hp -= damage;
		std::cout << _type << " took " << damage << " damage points!" << std::endl;
	}
	if (_hp < 0) {
		std::cout << _type << " have been killed." << std::endl;
		_hp = 0;
	}
}
