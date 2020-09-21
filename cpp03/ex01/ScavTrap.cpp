/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:47:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 10:38:41 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string	CHALLENGE[] = {
	"Running Faster than an immobile Robot",
	"Finding a golden fork",
	"Swallowing a grenade",
	"Touching your elbow with your tongue",
	"Escaping my bullets"
};

std::string	get_rand_chall() {
	return (CHALLENGE[std::rand() % 5]);
}

ScavTrap::ScavTrap(std::string &name) {
	_Name = name;
	ScavTrap::_HitPoints = 100;
	ScavTrap::_MaxHitPoints = 100;
	ScavTrap::_EnergyPoints = 50;
	ScavTrap::_MaxEnergyPoints = 50;
	ScavTrap::_Level = 1;
	ScavTrap::_MeleeAttackDamage = 20;
	ScavTrap::_RangedAttackDamage = 15;
	ScavTrap::_ArmorDamageReduction = 3;
	std::cout << "Booting sequence complete. Designation: SC4V-TP, Challenging Robot named ";
	std::cout << _Name << ". Recompiling my combat code!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

unsigned		&ScavTrap::get_melee_damage() {
	return this->_MeleeAttackDamage;
}

unsigned		&ScavTrap::get_ranged_damage() {
	return this->_RangedAttackDamage;
}

void	ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << _Name << " attacks ";
	std::cout << target << " at range, causing " << _RangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << _Name << " attacks ";
	std::cout << target << " in melee, causing " << _MeleeAttackDamage << " points of damage!" << std::endl;
	std::cout << "Present for you!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (_HitPoints > 0) {
		if (amount >= _ArmorDamageReduction)
			_HitPoints -= (amount - _ArmorDamageReduction);
		std::cout << "SC4V-TP " << _Name << " took " << amount << " points of damage, reduce by ";
		std::cout << _ArmorDamageReduction << " thanks to his armor!" << std::endl;
		if (_HitPoints <= 0) {
			_HitPoints = 0;
			std::cout << "I'm too pretty to die!" << std::endl;
			std::cout << "-DEATH-" << std::endl;
		}
		else {
			std::cout << "His HP are now at " << _HitPoints << std::endl;
			std::cout << "Why do I even feel pain?!" << std::endl;
		}
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (_HitPoints < _MaxHitPoints) {
		_HitPoints += amount;
		std::cout << "FR4G-TP " << _Name << " is healed of " << amount << " HP ! " << std::endl;
		std::cout << "Not dead yet !" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _Name << "can't be healed his HP are full !" << std::endl;
	if (_HitPoints > _MaxHitPoints)
		_HitPoints = _MaxHitPoints;
}

void	ScavTrap::challengeNewcomer(std::string const &target) {
	if (_EnergyPoints >= 25) {
		_EnergyPoints -= 25;
		std::cout << "Oh-oh ! A newcomer !" << std::endl;
		std::cout << "let's see if you can beat this challenge morron !" << std::endl;
		std::cout << "Oh Yeah ! SC4V-TP is challenging " << target;
		std::cout << " At " << get_rand_chall() << " !" << std::endl;
	}
	else {
		std::cout << "Searching challenge" << std::endl;
		std::cout << "No more energy for challenging... Tsk !" << std::endl;
	}
}
