/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:27:38 by trombone          #+#    #+#             */
/*   Updated: 2020/09/14 11:15:04 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char  *NotFoundException::what() const throw() {
    return "Secified int not found in the container.";
}

int main() {
    try {
        int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::vector<int> v(array, array +11);

        int f = easyfind(v, 8);
        std::cout << f << std::endl;
        f = easyfind(v, 0);
        std::cout << f << std::endl;
        f = easyfind(v, 5);
        std::cout << f << std::endl;
        f = easyfind(v, 42);
        std::cout << f << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}