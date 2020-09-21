/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:05:23 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 17:29:55 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class	AWeapon {
protected:
	void 		setName(std::string name);
	void 		setAPCost(int apcost);
	void 		setDamage(int damage);
private:
	std::string _name;
	int			_apcost;
	int			_damage;
public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &c);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &c);

	std::string	getName() const;
	int 		getAPCost() const;
	int			getDamage()	const;

	virtual void	attack() const = 0;
};

#endif
