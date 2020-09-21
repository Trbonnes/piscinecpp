/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:33:44 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:34:47 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "MiningBarge.hpp"

int	main() {
	MiningBarge barge;
    Asteroid *asteroid = new Asteroid();
    Comet *comet = new Comet();

    barge.equip(new DeepCoreMiner());
    barge.equip(new DeepCoreMiner());
    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    delete comet;
    delete asteroid;
}