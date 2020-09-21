/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:02:35 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 10:26:03 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class FragTrap {
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
	FragTrap(std::string &name);
	~FragTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	unsigned		&get_melee_damage();
	unsigned		&get_ranged_damage();

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
