/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 09:57:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 10:03:16 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Form f1("A38", 2, 1);
		Form f2("F69", 150, 148);
		std::cout << f1;
		std::cout << f2;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		f2.beSigned(b2);
		std::cout << f1;
		std::cout << f2;
		f1.beSigned(b1);
		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Form f1("A38", 2, 1);
		Form f2("F69", 150, 148);
		std::cout << f1;
		std::cout << f2;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		f1.beSigned(b2);
		std::cout << f1;
		std::cout << f2;
		f2.beSigned(b1);
		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Form f1("A38", 2, 1);
		Form f2("F69", 150, 148);
		std::cout << f1;
		std::cout << f2;
		Bureaucrat b1("Boris", 2);
		Bureaucrat b2("Donald", 148);
		std::cout << b1;
		std::cout << b2;

		f1.beSigned(b1);
		std::cout << f1;
		std::cout << f2;
		f1.beSigned(b1);
		std::cout << f1;
		std::cout << f2;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
