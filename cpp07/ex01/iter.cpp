/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 13:38:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 14:06:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	fn_int(int const &n) {
	std::cout << "This is an int: " << n << std::endl;
}

void	fn_string(std::string const &s) {
	std::cout << "This is a string: " << s << std::endl;
}

template<typename T>
void	fn_T(T const &t) {
	std::cout << "This is a T: " << t << std::endl;
}

template<typename T>
void	iter(T *array, size_t len, void (&fn)(T const &)) {
	for (unsigned i = 0; i < len; i++)
		fn(array[i]);
}

int main() {
	std::cout << "INT" << std::endl;
	int	array_i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(array_i, 10, fn_int);
	iter(array_i, 10, fn_T);

	std::cout << "STRING" << std::endl;
	std::string array_s[] = {"H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "!"};
	iter(array_s, 12, fn_string);
	iter(array_s, 12, fn_T);

	return 0;
}
