/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 09:48:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

const int	Fixed::_fractionalBitsNumber = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = n._raw;
	*this = n;
}

Fixed	&Fixed::operator=(const Fixed &n) {
	std::cout << "Assignation operator called" << std::endl;
	_raw = n.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}
