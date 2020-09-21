/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:37:36 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 12:09:57 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int	main() {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	Fixed		d(42.58f);
	a = d / b;
	std::cout << a << std::endl;
	a = d * b;
	std::cout << a << std::endl;
	a = d + b;
	std::cout << a << std::endl;
	a = d - b;
	std::cout << a << std::endl;

	std::cout << (d > b) << std::endl;
	std::cout << (d < b) << std::endl;
	std::cout << (d >= b) << std::endl;
	std::cout << (d <= b) << std::endl;
	std::cout << (d == b) << std::endl;
	std::cout << (d != b) << std::endl;

	return 0;
}