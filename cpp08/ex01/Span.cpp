/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:50:49 by trombone          #+#    #+#             */
/*   Updated: 2020/09/14 12:06:54 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _intNumber(0), _vec() {
}

Span::Span(size_t const &n): _intNumber(n), _vec() {
}

Span::Span(const Span &c): _intNumber(c._intNumber), _vec(c._vec) {
}

Span::~Span() {
}

Span &Span::operator=(const Span &c) {
	_intNumber = c._intNumber;
	_vec = c._vec;
	return *this;
}

void	Span::addNumber(int n) {
	if (_vec.size() >= _intNumber)
		throw ClassFullException();
	_vec.push_back(n);
}

int		Span::longestSpan() {
	if (_vec.size() <= 1)
		throw NoSpanException();
	std::sort(_vec.begin(), _vec.end());
	return (_vec.back() - _vec.front());
}

int		Span::shortestSpan() {
	if (_vec.size() <= 1)
		throw NoSpanException();
	std::sort(_vec.begin(), _vec.end());
	int	range = _vec[1] - _vec[0];
	for (unsigned i = 0; i <  _vec.size() - 1; i++) {
		if (range > _vec[i + 1] - _vec[i])
			range = _vec[i + 1] - _vec[i];
	}
	return range;
}

const char	*Span::ClassFullException::what() const throw() {
	return "Container is full!";
}

const char	*Span::NoSpanException::what() const throw() {
	return "Can't find any span!";
}
