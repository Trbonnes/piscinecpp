/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:21:18 by trbonnes          #+#    #+#             */
/*   Updated: 2020/08/12 16:51:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int rand_int(void) {
	std::srand(std::time(0) * std::time(0));
	int random = std::rand();
	int	isneg = std::rand() % 2;
	if (isneg != 0)
		random = -random;
	return random;
}

char gen_random() {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	return alphanum[rand() % (sizeof(alphanum) - 1)];
}

void	*serialize() {
	uint8_t	*raw = new uint8_t[8 + 4 + 8]; // uint8_t = unsigned char
	int		rand = rand_int();
	for (int i = 0; i < 8; i++) {
		raw[i] = gen_random();
	}
	raw[8] = uint8_t((rand >> 24) & 0xFF);
	raw[9] = uint8_t((rand >> 16) & 0xFF);
	raw[10] = uint8_t((rand >> 8) & 0xFF);
	raw[11] = uint8_t(rand & 0xFF);
	for (int i = 12; i < 8 + 4 + 8; i++) {
		raw[i] = gen_random();
	}
	return reinterpret_cast<void*>(raw);
}

Data	*deserialize(void *raw) {
	std::stringstream	ss;
	uint8_t				*bytes = reinterpret_cast<uint8_t*>(raw);
	Data				*data = new Data;

	for (int i = 0; i < 8; i++) {
		ss << char(bytes[i]);
	}
	data->s1 = ss.str();
	ss.str(std::string());
	data->n = bytes[8] << 24 | bytes[9] << 16 | bytes[10] << 8 | bytes[1] << 0;
	for (int i = 12; i < 8 + 4 + 8; i++) {
		ss << char(bytes[i]);
	}
	data->s2 = ss.str();
	delete reinterpret_cast<uint8_t*>(raw);
	return data;
}

int		main() {
	Data *data = deserialize(serialize());
	std::cout << "string s1: " << data->s1 << std::endl;
	std::cout << "int: " << data->n << std::endl;
	std::cout << "string s2: " << data->s2 << std::endl;
	return 0;
}