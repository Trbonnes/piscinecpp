/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:41:29 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/25 14:43:07 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	_name = name;
	_type = type;
}

void	Zombie::advert() {
	std::cout << "<" << _name << " (" << _type << ")> " << "Teke teke teke ...";
	std::cout << std::endl << std::endl;
}