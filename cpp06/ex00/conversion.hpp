/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:53:08 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 15:55:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <exception>
#include <climits>

class	BadArgumentException: public std::exception {
		public:
			virtual const char* what() const throw();
};

class	ImpossibleIntException: public std::exception {
		public:
			virtual const char* what() const throw();
};

#endif
