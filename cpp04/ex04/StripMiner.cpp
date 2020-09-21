/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:06:44 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:32:02 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner() {
}

StripMiner::StripMiner(const StripMiner &c) {
	(void)c;
}

StripMiner::~StripMiner() {
}

StripMiner &StripMiner::operator=(const StripMiner &c) {
	(void)c;
	return *this;
}

void StripMiner::mine(IAsteroid *asteroid) {
    std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
