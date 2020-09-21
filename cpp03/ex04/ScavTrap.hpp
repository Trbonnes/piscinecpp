/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:48:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:36:18 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(std::string &name);
		virtual ~ScavTrap();
	
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

		void	challengeNewcomer(std::string const & target);
};

#endif