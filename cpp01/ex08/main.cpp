/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:23:08 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 09:25:06 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void) {
	Human Titouan;

	Titouan.action("meleeAttack", "himself");
	Titouan.action("rangedAttack", "himself");
	Titouan.action("intimidatingShout", "himself");
	return 0;
}