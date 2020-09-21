/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:02:35 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:36:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap(std::string &name);
		virtual ~FragTrap();
	
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

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
