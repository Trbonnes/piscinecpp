/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:01:31 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 15:39:32 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	try {
		Array<int> a(5);

		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		for (unsigned i = 0; i < 6; i++) {
			std::cout << a[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Array<int> a(5);
		Array<int> b;

		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		b = a;
		for (unsigned i = 0; i < 6; i++) {
			std::cout << b[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Array<int> a(5);

		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		Array<int> b(a);
		for (unsigned i = 0; i < 6; i++) {
			std::cout << b[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}