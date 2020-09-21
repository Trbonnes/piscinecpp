/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:36:20 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:22:01 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string &name): ClapTrap(name, baseHitPoints(), baseMaxHitPoints(),
baseEnergyPoints(), baseMaxEnergyPoints(), baseLevel(), baseMeleeAttackDamage(),
baseRangedAttackDamage(), baseArmorDamageReduction()), FragTrap(name), NinjaTrap(name) {
	std::cout << "Behold the birth of the ultimate SUPER-TP " << name << " !" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "Not so super heh... Gwarg!" << std::endl;
}
	
int				SuperTrap::baseHitPoints() const{
	return FragTrap::baseHitPoints();
}

unsigned		SuperTrap::baseMaxHitPoints() const{
	return FragTrap::baseMaxHitPoints();
}

int				SuperTrap::baseEnergyPoints() const{
	return NinjaTrap::baseEnergyPoints();
}

unsigned		SuperTrap::baseMaxEnergyPoints() const{
	return NinjaTrap::baseMaxEnergyPoints();
}

unsigned		SuperTrap::baseLevel() const{
	return 1;
}

unsigned		SuperTrap::baseMeleeAttackDamage() const{
	return NinjaTrap::baseMeleeAttackDamage();
}

unsigned		SuperTrap::baseRangedAttackDamage() const{
	return FragTrap::baseRangedAttackDamage();
}

unsigned		SuperTrap::baseArmorDamageReduction() const{
	return FragTrap::baseArmorDamageReduction();
}

void	SuperTrap::rangedAttack(std::string const &target){
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target){
	NinjaTrap::meleeAttack(target);
}
