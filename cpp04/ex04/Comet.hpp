/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:13:26 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:13:37 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"

class	Comet: public IAsteroid {
private:
	;
public:
	Comet();
	Comet(const Comet &c);
	/*virtual*/ ~Comet();
	Comet &operator=(const Comet &c);

	std::string beMined(DeepCoreMiner *miner) const;
	std::string beMined(StripMiner *miner) const;
	std::string getName() const;
};

#endif
