/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 10:17:56 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractionalBitsNumber = 8;
const int	Fixed::_floatShifting = 256;

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

Fixed::Fixed(const int &i) {
	std::cout << "Int constructor called" << std::endl;
	_raw = i << _fractionalBitsNumber;
}

Fixed::Fixed(const float &f) {
	std::cout << "Float constructor called" << std::endl;
	_raw = (std::roundf(f * _floatShifting));
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

int		Fixed::toInt() const {
	return _raw >> _fractionalBitsNumber;
}

float	Fixed::toFloat() const {
	return float(_raw) / _floatShifting; 
}

Fixed	&Fixed::operator=(const Fixed &n) {
	std::cout << "Assignation operator called" << std::endl;
	_raw = n.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &n) {
	return out << n.toFloat();
}
