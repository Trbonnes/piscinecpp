/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:36:29 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:01:42 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
	public:
		SuperTrap(std::string &name);
		~SuperTrap();
	
		virtual int				baseHitPoints() const;
		virtual unsigned		baseMaxHitPoints() const;
		virtual int				baseEnergyPoints() const;
		virtual unsigned		baseMaxEnergyPoints() const;
		virtual unsigned		baseLevel() const;
		virtual unsigned		baseMeleeAttackDamage() const;
		virtual unsigned		baseRangedAttackDamage() const;
		virtual unsigned		baseArmorDamageReduction() const;

		virtual void	rangedAttack(std::string const &target);
		virtual void	meleeAttack(std::string const &target);
};

#endif