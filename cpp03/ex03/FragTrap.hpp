/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:02:35 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 10:10:36 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap(std::string &name);
		~FragTrap();

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
