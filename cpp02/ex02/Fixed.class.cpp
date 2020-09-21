/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 12:09:04 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractionalBitsNumber = 8;
const int	Fixed::_floatShifting = 256;

Fixed::Fixed() {
	_raw = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &n) {
	_raw = n._raw;
	*this = n;
}

Fixed::Fixed(const int &i) {
	_raw = i << _fractionalBitsNumber;
}

Fixed::Fixed(const float &f) {
	_raw = (std::roundf(f * _floatShifting));
}

int		Fixed::getRawBits() const {
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	_raw = raw;
}

int		Fixed::toInt() const {
	return _raw >> _fractionalBitsNumber;
}

float	Fixed::toFloat() const {
	return float(_raw) / _floatShifting; 
}

Fixed	&Fixed::operator=(const Fixed &n) {
	_raw = n.getRawBits();
	return *this;
}
		
bool	Fixed::operator>(const Fixed &n) const {
	return _raw > n._raw;
}

bool	Fixed::operator<(const Fixed &n) const {
	return _raw < n._raw;
}

bool	Fixed::operator>=(const Fixed &n) const {
	return _raw >= n._raw;
}

bool	Fixed::operator<=(const Fixed &n) const {
	return _raw <= n._raw;
}

bool	Fixed::operator==(const Fixed &n) const {
	return _raw == n._raw;
}

bool	Fixed::operator!=(const Fixed &n) const {
	return _raw != n._raw;
}

Fixed	Fixed::operator+(const Fixed &n) const {
	return _raw + n._raw;
}

Fixed	Fixed::operator-(const Fixed &n) const {
	return _raw - n._raw;
}

Fixed	Fixed::operator*(const Fixed &n) const {
	return Fixed(toFloat() * n.toFloat());
}

Fixed	Fixed::operator/(const Fixed &n) const {
	return Fixed(toFloat() / n.toFloat());
}

Fixed	&Fixed::operator++() {
	_raw++;
	return *this;
}

Fixed	&Fixed::operator--() {
	_raw--;
	return *this;
}

Fixed	Fixed::operator++(int _i) {
	(void)_i;
	Fixed	n = *this;
	_raw++;
	return n;
}

Fixed	Fixed::operator--(int _i) {
	(void)_i;
	Fixed	n = *this;
	_raw--;
	return n;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a._raw < b._raw ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	return a._raw > b._raw ? a: b;
}

Fixed	&min(Fixed &a, Fixed &b) {
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed	&max(Fixed &a, Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &n) {
	return out << n.toFloat();
}
