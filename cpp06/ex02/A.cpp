/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:32:04 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 10:32:17 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A() {

}

A::A(const A &c) {
	(void)c;
}

A::~A() {

}

A &A::operator=(const A &c) {
	(void)c;
	return *this;
}
