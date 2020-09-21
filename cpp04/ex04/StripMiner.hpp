/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:06:34 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:06:35 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class	StripMiner: public IMiningLaser {
private:
	;
public:
	StripMiner();
	StripMiner(const StripMiner &c);
	/*virtual*/ ~StripMiner();
	StripMiner &operator=(const StripMiner &c);

	void	mine(IAsteroid *asteroid);
};

#endif
