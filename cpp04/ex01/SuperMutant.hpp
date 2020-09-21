/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:32 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:32 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant: public Enemy {
private:
	;
public:
	SuperMutant();
	SuperMutant(const SuperMutant &c);
	/*virtual*/ ~SuperMutant();
	SuperMutant &operator=(const SuperMutant &c);

	void	takeDamage(int damage);
};

#endif
