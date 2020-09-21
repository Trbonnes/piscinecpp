/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:13:28 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:36:44 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"

Comet::Comet() {
}

Comet::Comet(const Comet &c) {
	(void)c;
}

Comet::~Comet() {
}

Comet &Comet::operator=(const Comet &c) {
	(void)c;
	return *this;
}

std::string	Comet::beMined(DeepCoreMiner *miner) const {
	(void)miner;
	return "Meium";
}

std::string	Comet::beMined(StripMiner *miner) const {
	(void)miner;
	return "Tartarite";
}

std::string	Comet::getName() const {
	return "Comet";
}
