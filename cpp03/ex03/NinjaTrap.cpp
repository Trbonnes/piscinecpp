/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 10:21:53 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 11:27:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string &name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "Booting sequence complete. Designation: NINJ4-TP, Shinobi Robot named ";
	std::cout << getName() << ". I'm a robot ninja..." << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Good thing I don't have a soul!" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "NINJ4-TP " << getName() << " attacks ";
	std::cout << target << " at range, causing " << getRangedAttackDamage() << " points of damage!" << std::endl;
	std::cout << "I am NOT sorry!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "NINJ4-TP " << getName() << " attacks ";
	std::cout << target << " in melee, causing " << getMeleeAttackDamage() << " points of damage!" << std::endl;
	std::cout << "I am so impressed with myself!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &target) {
	if (getEnergyPoints() >= 30) {
		setEnergyPoints(getEnergyPoints() - 30);
		std::cout << "NINJ4-TP " << getName() << " transform into a right shoe "
				<< target.getName() << std::endl;
	}
	else
		std::cout << "Well... NINJ4-TP " << getName() << " is out of energy... Too bad!"
				<< std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &target) {
	if (getEnergyPoints() >= 30) {
		setEnergyPoints(getEnergyPoints() - 30);
		std::cout << "NINJ4-TP " << getName() << " transform into a left shoe "
				<< target.getName() << std::endl;
	}
	else
		std::cout << "Well... NINJ4-TP " << getName() << " is out of energy... Too bad!"
				<< std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &target) {
	if (getEnergyPoints() >= 30) {
		setEnergyPoints(getEnergyPoints() - 30);
		std::cout << "NINJ4-TP " << getName() << " transform into a shoebox "
				<< target.getName() << std::endl;
	}
	else
		std::cout << "Well... NINJ4-TP " << getName() << " is out of energy... Too bad!"
				<< std::endl;
}

