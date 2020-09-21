/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:20:00 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:04:15 by trbonnes         ###   ########.fr       */
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

FragTrap::FragTrap(std::string &name): ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << "Booting sequence complete. Designation: FR4G_TP, Hyperion Robot named ";
	std::cout << getName() << ". Let's get this party started!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}
	
int				FragTrap::baseHitPoints() const{
	return 100;
}

unsigned		FragTrap::baseMaxHitPoints() const{
	return 100;
}

int				FragTrap::baseEnergyPoints() const{
	return 100;
}

unsigned		FragTrap::baseMaxEnergyPoints() const{
	return 100;
}

unsigned		FragTrap::baseLevel() const{
	return 1;
}

unsigned		FragTrap::baseMeleeAttackDamage() const{
	return 30;
}

unsigned		FragTrap::baseRangedAttackDamage() const{
	return 20;
}

unsigned		FragTrap::baseArmorDamageReduction() const{
	return 5;
}


void	FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << getName() << " attacks ";
	std::cout << target << " at range, causing " << getRangedAttackDamage() << " points of damage!" << std::endl;
	std::cout << "Is it dead? Can, can I open my eyes now?" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << getName() << " attacks ";
	std::cout << target << " in melee, causing " << getMeleeAttackDamage() << " points of damage!" << std::endl;
	std::cout << "Ha ha ha! Fall before your robot overlord!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (getEnergyPoints() >= 25) {
		setEnergyPoints(getEnergyPoints() - 25);
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
