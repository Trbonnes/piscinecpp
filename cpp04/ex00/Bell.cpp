/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:39:01 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:31 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bell.hpp"

Bell::Bell(std::string name): Victim(name) {
	std::cout << "Pyon, Pyon, I am " << getName() << "." << std::endl;
}

Bell::Bell(const Bell &c): Victim(c) {
	std::cout << "Pyon, Pyon, I am " << getName() << "." << std::endl;
}

Bell::~Bell() {
	std::cout << "Good thing I'm dying" << std::endl;
}

void	Bell::getPolymorphed() const{
	std::cout << getName() << " has been turned into a tiny tiny rabbit!" << std::endl;
}
