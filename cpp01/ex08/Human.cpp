/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:29:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 09:27:27 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Human::fct_ptr Human::fct_tab[3] = {
	{"meleeAttack", &Human::meleeAttack},
	{"rangedAttack", &Human::rangedAttack},
	{"intimidatingShout", &Human::intimidatingShout}
};

void	Human::meleeAttack(std::string const &target) {
	std::cout << "Executing a melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target) {
	std::cout << "Executing a long range attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target) {
	std::cout << "WOUAAAAAAAAAAAAAAAAAAAAAAAAAH ! On " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target){
	for (int i = 0 ; i < 3 ; i++) {
		if (Human::fct_tab[i].fct_name == action_name) {
			(this->*fct_tab[i].fn)(target);
			break ;
		}
	}
}
