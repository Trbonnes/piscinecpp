/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:20:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:27:19 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class	MiningBarge {
private:
	IMiningLaser *_lasers[4];
public:
	MiningBarge();
	MiningBarge(const MiningBarge &c);
	/*virtual*/ ~MiningBarge();
	MiningBarge &operator=(const MiningBarge &c);

	void	equip(IMiningLaser *laser);
	void	mine(IAsteroid *ast) const;
};

#endif
