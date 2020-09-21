/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:05:16 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:24 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::AWeapon(const AWeapon &c): _name(c._name), _apcost(c._apcost), _damage(c._damage) {
}

AWeapon::~AWeapon() {
}

AWeapon &AWeapon::operator=(const AWeapon &c) {
	_name = c._name;
	_apcost = c._apcost;
	_damage = c._damage;
	return *this;
}

void 		AWeapon::setName(std::string name){
	_name = name;
}

void 		AWeapon::setAPCost(int apcost){
	_apcost = apcost;
}

void 		AWeapon::setDamage(int damage){
	_damage = damage;
}


std::string	AWeapon::getName() const {
	return _name;
}

int	AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const{
	return _damage;
}
