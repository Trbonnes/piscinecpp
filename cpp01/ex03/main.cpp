/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:50:24 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 13:39:22 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void){
	ZombieHorde horde_1(4);
	horde_1.announce();

	ZombieHorde horde_2(8);
	horde_2.announce();
}