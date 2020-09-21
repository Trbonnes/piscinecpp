/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 10:18:38 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 10:39:17 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap: public ClapTrap {
	public:
		NinjaTrap(std::string &name);
		~NinjaTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);

        void	ninjaShoebox(const FragTrap &target);
        void	ninjaShoebox(const ScavTrap &target);
        void	ninjaShoebox(const NinjaTrap &target);
};

#endif
