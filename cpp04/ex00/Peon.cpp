/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:56:02 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:21 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog, Zog." << std::endl;
}

Peon::Peon(const Peon &c): Victim(c) {
	std::cout << "Zog, Zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
