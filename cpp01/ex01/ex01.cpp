/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:35:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/25 13:41:16 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak() {
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	
	delete panthere;
}
