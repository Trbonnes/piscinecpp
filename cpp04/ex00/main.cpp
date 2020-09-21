/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:41:21 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:47:39 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Bell.hpp"

int main() {
	{
		Sorcerer robert("Robert", "the Magnificent");

		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	{
		Sorcerer G("Gandalf", "The grey");

		Victim	C("Charles");
		Peon	P("Patrick");
		Bell	B("Bell");

		std::cout << C << P << B;

		G.polymorph(C);
		G.polymorph(P);
		G.polymorph(B);
	}
	return 0;
}