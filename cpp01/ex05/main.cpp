/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:43:21 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 08:38:13 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int	main(void) {
	Human Titouan;

	std::cout << Titouan.identify() << std::endl;
	std::cout << Titouan.getbrain().identify() << std::endl;
	Titouan.getbrain().hyper_smart_reflexion();
	return 0;
}
