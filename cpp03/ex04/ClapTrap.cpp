/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 09:42:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 11:01:05 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static int min(int a, int b)
{
    return a < b ? a : b;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, unsigned maxHitPoints,
                	int energyPoints, unsigned maxEnergyPoints, unsigned level,
                	unsigned meleeAttackDamage, unsigned rangedAttackDamage,
                	unsigned armorDamageReduction) {
	ClapTrap::_Name = name;
	ClapTrap::_HitPoints = hitPoints;
	ClapTrap::_MaxHitPoints = maxHitPoints;
	ClapTrap::_EnergyPoints = energyPoints;
	ClapTrap::_MaxEnergyPoints = maxEnergyPoints;
	ClapTrap::_Level = level;
	ClapTrap::_MeleeAttackDamage = meleeAttackDamage;
	ClapTrap::_RangedAttackDamage = rangedAttackDamage;
	ClapTrap::_ArmorDamageReduction = armorDamageReduction;
	std::cout << "Claptrap -- starting bootup sequence." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "RUN FOR YOUR LIIIIIVES!!!... Oh... I'm already dead." << std::endl;
}

const std::string	&ClapTrap::getName() const {
	return this->_Name;
}

const int 			&ClapTrap::getHitPoints() const {
	return this->_HitPoints;
}

const unsigned		&ClapTrap::getMaxHitPoints() const {
	return this->_MaxHitPoints;
}

const int 			&ClapTrap::getEnergyPoints() const {
	return this->_EnergyPoints;
}

const unsigned		&ClapTrap::getMaxEnergyPoints() const {
	return this->_MaxEnergyPoints;
}

const unsigned		&ClapTrap::getLevel() const {
	return this->_Level;
}

const unsigned		&ClapTrap::getMeleeAttackDamage() const {
	return this->_MeleeAttackDamage;
}

const unsigned		&ClapTrap::getRangedAttackDamage() const {
	return this->_RangedAttackDamage;
}

const unsigned		&ClapTrap::getArmorDamageReduction() const {
	return this->_ArmorDamageReduction;
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
    _EnergyPoints = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
    _HitPoints = hitPoints;
}

void	ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "CL4P-TP " << getName() << " attacks ";
	std::cout << target << " at range, causing " << getRangedAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "CL4P-TP " << getName() << " attacks ";
	std::cout << target << " in melee, causing " << getMeleeAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints > 0) {
		if (amount >= _ArmorDamageReduction)
			_HitPoints -= (amount - _ArmorDamageReduction);
		std::cout << "CL4P-TP " << _Name << " took " << amount << " points of damage, reduce by ";
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

void ClapTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_HitPoints + int(amount), _MaxHitPoints);
    std::cout << "CL4P-TP " << _Name
    		<< " was repaired by " << newHp - _HitPoints
			<< " points!" << std::endl;
    _HitPoints = newHp;
}
