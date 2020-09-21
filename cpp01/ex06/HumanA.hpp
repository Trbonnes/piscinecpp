/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:53:34 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 10:09:31 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(std::string name, Weapon &Weapon);

		void	setWeapon(Weapon &Weapon);
		void	setName(std::string name);

		std::string	getName() const;

		void	attack();
	private:
		std::string	_name;
		Weapon		&_Weapon;
};

#endif
