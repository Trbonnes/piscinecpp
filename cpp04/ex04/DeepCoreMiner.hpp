/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:03:13 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:32:30 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class	DeepCoreMiner: public IMiningLaser {
private:
	;
public:
	DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner &c);
	/*virtual*/ ~DeepCoreMiner();
	DeepCoreMiner &operator=(const DeepCoreMiner &c);

	void	mine(IAsteroid *asteroid);
};

#endif
