/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:48:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 10:37:17 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScavTrap {
private:
	int				_HitPoints;
	unsigned		_MaxHitPoints;
	int				_EnergyPoints;
	unsigned		_MaxEnergyPoints;
	unsigned		_Level;
	std::string		_Name;
	unsigned		_MeleeAttackDamage;
	unsigned		_RangedAttackDamage;
	unsigned		_ArmorDamageReduction;
public:
	ScavTrap(std::string &name);
	~ScavTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	unsigned		&get_melee_damage();
	unsigned		&get_ranged_damage();

	void	challengeNewcomer(std::string const & target);
};

#endif