/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:56:30 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 15:29:13 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const &name): _name(name) {
	for (int i = 0; i < 4; i++)
		_equipement[i] = NULL;
}

Character::Character(const Character &c): _name(c._name) {
	for (int i = 0; i < 4; i++)
		_equipement[i] = c._equipement[i]->clone();
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _equipement[i];
}

Character &Character::operator=(const Character &c) {
	_name = c._name;
	for (int i = 0; i < 4; i++)
		delete _equipement[i];
	for (int i = 0; i < 4; i++)
		_equipement[i] = c._equipement[i]->clone();
	return *this;
}

std::string const	&Character::getName() const {
	return _name;
}

void	Character::equip(AMateria* m){
	if (_equipement[3])
		return ;

	int i = 0;
	while (_equipement[i] != NULL)
		i++;
	_equipement[i] = m;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3 || !_equipement[idx])
		return ;

	_equipement[idx] = NULL;
	for (int i = idx + 1; i < 4; i++) {
		_equipement[i - 1] = _equipement[i];
	}
	_equipement[3] = NULL;
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3 || !_equipement[idx])
		return ;

	_equipement[idx]->use(target);
}

