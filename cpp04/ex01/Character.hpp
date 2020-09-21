/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:14:53 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 10:24:57 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character {
protected:
	void	setName(std::string name);
	void	setAP(int ap);
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;
public:
	Character();
	Character(std::string const &name);
	Character(const Character &c);
	/*virtual*/ ~Character();
	Character &operator=(const Character &c);

	void	recoverAP();
	void	equip(AWeapon *weap);
	void	attack(Enemy *vilain);

	std::string const	getName() const;
	int					getAP() const;
	AWeapon				*getWeapon() const;

};

std::ostream &operator<<(std::ostream &out, const Character &c);

#endif
