/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:51:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:01 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl ;
}

Sorcerer::Sorcerer(const Sorcerer &s): _name(s._name), _title(s._title) {
	std::cout << s.getName() << ", " << s.getTitle() << ", is born!" << std::endl ;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl ;
}

const std::string &Sorcerer::getName() const {
	return _name;
}

const std::string &Sorcerer::getTitle() const {
	return _title;
}

void Sorcerer::polymorph(Victim const &c) const {
	c.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &s) {
	return out << "I am " << s.getName() << ", " << s.getTitle() << ", and i like ponies!" << std::endl;
}
