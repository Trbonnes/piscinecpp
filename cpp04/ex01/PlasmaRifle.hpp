/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:40 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:40 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle: public AWeapon {
private:
	;
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &c);
	/*virtual*/ ~PlasmaRifle();
	PlasmaRifle &operator=(const PlasmaRifle &c);

	void	attack() const;
};

#endif
