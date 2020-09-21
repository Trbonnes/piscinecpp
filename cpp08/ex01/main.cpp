/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:55:42 by trombone          #+#    #+#             */
/*   Updated: 2020/09/14 16:10:04 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Span S(10);
        int array[10] = {4, 16, 89, 62, 254, 72, 189, 1024, 856, 9999};
        S.addNumber(14); //Quote this line to use vector.assign() instead of vector.insert()
        S.addMultiple(array, array + 9);
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Span S(2000);
        std::srand(time(0) * time(0));
        for (int i = 0; i < 3000; i++) {
            S.addNumber(rand());
        }
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Span S(2000);
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}