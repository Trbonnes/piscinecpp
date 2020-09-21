/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:20:14 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:37:51 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include <iostream>

MiningBarge::MiningBarge() {
	for (int i = 0; i < 4; i++)
		_lasers[i] = NULL;
}

MiningBarge::MiningBarge(const MiningBarge &c) {
	for (int i = 0; i < 4; i++)
		_lasers[i] = c._lasers[i];
}

MiningBarge::~MiningBarge() {
	for (int i = 0; i < 4; i++)
		delete _lasers[i];
}

MiningBarge &MiningBarge::operator=(const MiningBarge &c) {
	for (int i = 0; i < 4; i++)
		delete _lasers[i];
	for (int i = 0; i < 4; i++)
		_lasers[i] = c._lasers[i];
	return *this;
}

void	MiningBarge::equip(IMiningLaser *laser) {
	if (_lasers[3])
		return ;

	int i = 0;
	while (_lasers[i] != NULL)
		i++;
	_lasers[i] = laser;
}

void	MiningBarge::mine(IAsteroid *ast) const {
	for (int i = 0; i < 4 && _lasers[i]; i++) {
		_lasers[i]->mine(ast);
	}
}
