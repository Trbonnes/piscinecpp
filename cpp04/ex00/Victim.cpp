/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:51:45 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/17 13:43:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared" << std::endl;
}

Victim::Victim(const Victim &c): _name(c._name) {
	std::cout << "Some random victim called " << _name << " juste appeared" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " juste died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const {
	return _name;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Victim &c) {
	return out << "I'm " << c.getName() << " and i like otters!" << std::endl;
}
