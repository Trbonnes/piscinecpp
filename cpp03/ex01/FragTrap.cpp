/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:20:00 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 10:38:12 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string	ATTACKS[] = {
	"Running Away",
	"Emptying the magazine in your face",
	"Please don't hit me",
	"Boom Baby",
	"Magical Fire Ball (That's just a normal flamethroer thought)"
};

std::string	get_rand_attack() {
	return (ATTACKS[std::rand() % 5]);
}

FragTrap::FragTrap(std::string &name) {
	_Name = name;
	FragTrap::_HitPoints = 100;
	FragTrap::_MaxHitPoints = 100;
	FragTrap::_EnergyPoints = 100;
	FragTrap::_MaxEnergyPoints = 100;
	FragTrap::_Level = 1;
	FragTrap::_MeleeAttackDamage = 30;
	FragTrap::_RangedAttackDamage = 20;
	FragTrap::_ArmorDamageReduction = 5;
	std::cout << "Booting sequence complete. Designation: FR4G_TP, Hyperion Robot named ";
	std::cout << _Name << ". Let's get this party started!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

unsigned		&FragTrap::get_melee_damage() {
	return this->_MeleeAttackDamage;
}

unsigned		&FragTrap::get_ranged_damage() {
	return this->_RangedAttackDamage;
}

void	FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << _Name << " attacks ";
	std::cout << target << " at range, causing " << _RangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "Is it dead? Can, can I open my eyes now?" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << _Name << " attacks ";
	std::cout << target << " in melee, causing " << _MeleeAttackDamage << " points of damage!" << std::endl;
	std::cout << "Ha ha ha! Fall before your robot overlord!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (_HitPoints > 0) {
		if (amount >= _ArmorDamageReduction)
			_HitPoints -= (amount - _ArmorDamageReduction);
		std::cout << "FR4G-TP " << _Name << " took " << amount << " points of damage, reduce by ";
		std::cout << _ArmorDamageReduction << " thanks to his armor!" << std::endl;
		if (_HitPoints <= 0) {
			_HitPoints = 0;
			std::cout << "My robotic flesh! AAHH!" << std::endl;
			std::cout << "-DEATH-" << std::endl;
		}
		else {
			std::cout << "His HP are now at " << _HitPoints << std::endl;
			std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!...." << "Nevermind I'm fine" << std::endl;
		}
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (_HitPoints < _MaxHitPoints) {
		_HitPoints += amount;
		std::cout << "FR4G-TP " << _Name << " is healed of " << amount << " HP ! " << std::endl;
		std::cout << "Hehe, still alive !" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _Name << "can't be healed his HP are full !" << std::endl;
	if (_HitPoints > _MaxHitPoints)
		_HitPoints = _MaxHitPoints;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_EnergyPoints >= 25) {
		_EnergyPoints -= 25;
		std::cout << "Activating VaultHunter.EXE!" << std::endl;
		std::cout << "It's about to get magical!" << std::endl;
		std::cout << "Oh Yeah ! FR4G-TP is attacking " << target;
		std::cout << " With his awesome " << get_rand_attack() << " skill !" << std::endl;
	}
	else {
		std::cout << "Activating VaultHunt....." << std::endl;
		std::cout << "Who needs ammo anyway, am I right?" << std::endl;
	}
}
