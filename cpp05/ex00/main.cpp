/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 08:49:58 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 09:01:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		b1.decrementGrade();
		b2.incrementGrade();
		std::cout << b1;
		std::cout << b2;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1;
		std::cout << b2;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1;
		std::cout << b2;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1;
		std::cout << b2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 149);
		std::cout << b1;
		std::cout << b2;

		b1.decrementGrade();
		b2.incrementGrade();
		std::cout << b1;
		std::cout << b2;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1;
		std::cout << b2;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1;
		std::cout << b2;
		b2.decrementGrade();
		b1.incrementGrade();
		std::cout << b1;
		std::cout << b2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Boris", 0);
		std::cout << b1;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b2("Donald", 151);
		std::cout << b2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}