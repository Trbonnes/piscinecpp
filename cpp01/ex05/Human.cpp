/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:21:28 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 08:36:35 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain		&Human::getbrain() {
	return _gray_matter;
}

std::string	Human::identify() const {
	return _gray_matter.identify();
}
