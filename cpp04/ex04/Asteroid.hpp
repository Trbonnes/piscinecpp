/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:12:05 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:12:06 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"

class	Asteroid: public IAsteroid {
private:
	;
public:
	Asteroid();
	Asteroid(const Asteroid &c);
	/*virtual*/ ~Asteroid();
	Asteroid &operator=(const Asteroid &c);

	std::string beMined(DeepCoreMiner *miner) const;
	std::string beMined(StripMiner *miner) const;
	std::string getName() const;
};

#endif
