/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:47:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:04:52 by trbonnes         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string &name): ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << "Booting sequence complete. Designation: SC4V-TP, Challenging Robot named ";
	std::cout << getName() << ". Recompiling my combat code!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}
	
int				ScavTrap::baseHitPoints() const{
	return 100;
}

unsigned		ScavTrap::baseMaxHitPoints() const{
	return 100;
}

int				ScavTrap::baseEnergyPoints() const{
	return 50;
}

unsigned		ScavTrap::baseMaxEnergyPoints() const{
	return 50;
}

unsigned		ScavTrap::baseLevel() const{
	return 1;
}

unsigned		ScavTrap::baseMeleeAttackDamage() const{
	return 20;
}

unsigned		ScavTrap::baseRangedAttackDamage() const{
	return 15;
}

unsigned		ScavTrap::baseArmorDamageReduction() const{
	return 3;
}

void	ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << getName() << " attacks ";
	std::cout << target << " at range, causing " << getRangedAttackDamage() << " points of damage!" << std::endl;
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << getName() << " attacks ";
	std::cout << target << " in melee, causing " << getMeleeAttackDamage() << " points of damage!" << std::endl;
	std::cout << "Present for you!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target) {
	if (getEnergyPoints() >= 25) {
		setEnergyPoints(getEnergyPoints() - 25);
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
