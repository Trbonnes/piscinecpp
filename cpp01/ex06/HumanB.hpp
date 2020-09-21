/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:26:51 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 14:03:49 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {
	public:
		HumanB(std::string name);

		void	setWeapon(Weapon &Weapon);
		void	setName(std::string name);

		std::string	getName() const;

		void	attack();
	private:
		std::string	_name;
		Weapon		*_Weapon; //a pointer can be null where a reference can not. A reference is the object itself while a pointer is it own entity.
};

#endif
