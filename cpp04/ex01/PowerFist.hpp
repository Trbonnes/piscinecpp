/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:37 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:37 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist: public AWeapon {
private:
	;
public:
	PowerFist();
	PowerFist(const PowerFist &c);
	/*virtual*/ ~PowerFist();
	PowerFist &operator=(const PowerFist &c);

	void	attack() const;
};

#endif
