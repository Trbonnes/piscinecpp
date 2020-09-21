/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:34:32 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:09:44 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_equipement[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &c) {
	for (int i = 0; i < 4; i++)
		_equipement[i] = c._equipement[i];
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete _equipement[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &c) {
	for (int i = 0; i < 4; i++)
		delete _equipement[i];
	for (int i = 0; i < 4; i++)
		_equipement[i] = c._equipement[i];
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (_equipement[3])
		return ;

	int i = 0;
	while (_equipement[i] != NULL)
		i++;
	_equipement[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_equipement[i] && _equipement[i]->getType() == type)
			return _equipement[i]->clone();
	}
	return 0;
}
