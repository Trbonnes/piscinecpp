/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:34:49 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 12:44:39 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad(): _count(0), _lst(NULL) {
}

Squad::Squad(const Squad &c): _count(c._count), _lst(lst_cpy(c._lst)) {
}

Squad::~Squad() {
	lst_destroy(_lst);
}

Squad &Squad::operator=(const Squad &c) {
	lst_destroy(_lst);
	_lst = lst_cpy(c._lst);
	_count = c._count;
	return *this;
}


Squad::_marine *Squad::lst_cpy(_marine *lst) {
	if (!lst)
		return NULL;
	return new _marine((Squad::_marine) {lst->el->clone(), lst_cpy(lst->next)});
}

void	Squad::lst_destroy(_marine *lst) {
	if (!lst)
		return;
	delete lst->el;
	lst_destroy(lst->next);
	delete lst;
}

int		Squad::getCount() const {
	return _count;
}

ISpaceMarine	*Squad::getUnit(int unit) const {
	Squad::_marine *tmp = _lst;

	for (int i = 0; i != unit && tmp; i++) {
		tmp = tmp->next;
	}
	return tmp ? tmp->el : NULL;
}

int		Squad::push(ISpaceMarine *el) {
	if (!el)
		return _count;
		
	for (Squad::_marine *n = _lst; n; n = n->next) {
		if (n->el == el)
			return _count;
	}

	if (_lst != NULL) {
		Squad::_marine *n = _lst;
		while(n->next)
			n = n->next;
		n->next = new _marine((Squad::_marine) {el, NULL});
	}
	else 
		_lst = new _marine((Squad::_marine) {el, NULL});
	return ++_count;
}
