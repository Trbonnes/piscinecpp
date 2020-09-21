/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 10:18:38 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:36:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap: virtual public ClapTrap {
	public:
		NinjaTrap(std::string &name);
		virtual ~NinjaTrap();
	
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

        void	ninjaShoebox(const FragTrap &target);
        void	ninjaShoebox(const ScavTrap &target);
        void	ninjaShoebox(const NinjaTrap &target);
};

#endif
