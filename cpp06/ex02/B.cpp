/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:32:26 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 10:32:31 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {

}

B::B(const B &c) {
	(void)c;
}

B::~B() {

}

B &B::operator=(const B &c) {
	(void)c;
	return *this;
}

