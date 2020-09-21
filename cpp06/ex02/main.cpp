/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:33:09 by trbonnes          #+#    #+#             */
/*   Updated: 2020/08/12 16:55:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*generate() {
	std::srand(std::time(0) * time(0));
	int	select = std::rand() % 3;
	if (select == 0)
		return new A();
	if (select == 1)
		return new B();
	else
		return new C();

}

void	identify_from_pointer(Base *p) {
	if (A *v = dynamic_cast<A*>(p)) // If the cast is successful, dynamic_cast returns a value of type new-type. If the cast fails and new-type is a pointer type, it returns a null pointer of that type. If the cast fails and new-type is a reference type, it throws an exception that matches a handler of type std::bad_cast.
		std::cout << "A" << std::endl;
	else if (B *v = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::bad_cast &e){}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::bad_cast &e){}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::bad_cast &e){}
}

int	main() {
	Base *p = generate();
	
	std::cout << "FROM POINTER" << std::endl;
	identify_from_pointer(p);

	std::cout << "FROM REFEENCE" << std::endl;
	identify_from_reference(*p);
	
	delete p;
	
	return 0;
}
