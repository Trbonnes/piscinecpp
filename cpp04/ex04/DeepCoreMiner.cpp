/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:03:11 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:05:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &c) {
	(void)c;
}

DeepCoreMiner::~DeepCoreMiner() {
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &c) {
	(void)c;
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid) {
    std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
