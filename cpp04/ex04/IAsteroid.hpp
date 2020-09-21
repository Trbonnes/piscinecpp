/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:08:16 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:31:56 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include <iostream>

class StripMiner;
class DeepCoreMiner;

class IAsteroid {
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *miner) const = 0;
	virtual std::string beMined(StripMiner *miner) const = 0;
	virtual std::string getName() const = 0;
};

#endif