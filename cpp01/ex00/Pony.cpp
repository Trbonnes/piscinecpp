/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:46:49 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 12:10:15 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::pony_do() {
	std::cout << "Tagada Tagada Tagada" << std::endl;
}

Pony	ponyOnTheStack() {
	Pony Titouan;
	return Titouan;
}

Pony	*ponyOnTheHeap() {
	return new Pony();
}
