/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:30:37 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 10:28:31 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

int main() {
	CentralBureaucracy CAF;
	
	try {
		for (int i = 0; i < 40; i++) {
			Bureaucrat b("Jimmy", 3);
			CAF.feedBureaucrat(b);
			CAF.feedBureaucrat(b);
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		for (int i = 0; i < 200; i++)
			CAF.queuUP("SomeRandomPeople");
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		CAF.doBureaucracy();
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}