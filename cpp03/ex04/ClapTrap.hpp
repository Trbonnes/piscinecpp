/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 09:27:21 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:36:40 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class	ClapTrap {
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
		ClapTrap(std::string name, int hitPoints, unsigned maxHitPoints,
                int energyPoints, unsigned maxEnergyPoints, unsigned level,
                unsigned meleeAttackDamage, unsigned rangedAttackDamage,
                unsigned armorDamageReduction);
		virtual ~ClapTrap();

		const std::string	&getName() const;
        const int 			&getHitPoints() const;
        const unsigned		&getMaxHitPoints() const;
        const int 			&getEnergyPoints() const;
        const unsigned		&getMaxEnergyPoints() const;
        const unsigned		&getLevel() const;
        const unsigned		&getMeleeAttackDamage() const;
        const unsigned		&getRangedAttackDamage() const;
        const unsigned		&getArmorDamageReduction() const;
	
		virtual int				baseHitPoints() const = 0;
		virtual unsigned		baseMaxHitPoints() const = 0;
		virtual int				baseEnergyPoints() const = 0;
		virtual unsigned		baseMaxEnergyPoints() const = 0;
		virtual unsigned		baseLevel() const = 0;
		virtual unsigned		baseMeleeAttackDamage() const = 0;
		virtual unsigned		baseRangedAttackDamage() const = 0;
		virtual unsigned		baseArmorDamageReduction() const = 0;

		void				setEnergyPoints(const int &energyPoints);
		void				setHitPoints(const int &hitPoints);

		virtual void		rangedAttack(std::string const &target);
		virtual void		meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
        void				beRepaired(unsigned int amount);
};

#endif
