/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:32:51 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 16:49:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main() {

	{

		Zombie Zomb1("Titouan", "Useless Undead");
		Zomb1.advert();

	}

	{
		ZombieEvent Zombcreat("Useful Undead");
	
		Zombcreat.randomChump();

		Zombie *Zomb2 = Zombcreat.newZombie("Harold");
		Zomb2->advert();
		delete Zomb2;

	}
}