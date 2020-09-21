/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:59:29 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/25 16:11:57 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string		s = "HI THIS IS BRAIN";
	std::string		*p = &s;
	std::string		&r = s;

	std::cout << *p << std::endl;
	std::cout << r << std::endl;
}