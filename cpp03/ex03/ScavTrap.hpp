/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:48:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 10:10:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(std::string &name);
		~ScavTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);

		void	challengeNewcomer(std::string const & target);
};

#endif