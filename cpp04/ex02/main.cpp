/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:29:04 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 12:45:27 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int	main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	Squad* vlc = new Squad();
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

    ISquad *vlc2 = new Squad();
    delete vlc;

    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;

    std::cout << (vlc2->getUnit(1) == jim) << std::endl;
    std::cout << vlc2->getUnit(99) << std::endl;

    for (int i = 0; i < vlc2->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc2;

	return 0;

}