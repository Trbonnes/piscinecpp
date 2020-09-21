/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:21:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 13:12:58 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

int		use_error(){
	std::cout << "Error: use [FILE] [TO_FIND] [REPLACEMENT]" << std::endl;
	return 1;
}

void	file_recreate(std::stringstream &ss, std::ifstream &file_stream,
std::ofstream &file_stream_replace, std::string &to_find, std::string &replacement){
	char		c;
	int			pos;
	unsigned	i;

	while (file_stream.get(c)) {
		ss.str("");
		ss.clear();
		if (c == to_find.front()) {
			ss << c;
			for (i = 0 ; i < to_find.length() - 1 ; i++){
				file_stream.get(c);
				ss << c;
			}
			if (to_find.compare(ss.str()) == 0){
				file_stream_replace << replacement;
			}
			else {
				pos = file_stream.tellg();
				file_stream.seekg(pos - i - 1, std::ios::beg);
				file_stream.get(c);
				file_stream_replace << c;
			}
		}
		else
			file_stream_replace << c;
	}
}

int		main(int ac, char **av){
	if (ac != 4)
		return use_error();

	std::string	file = av[1];
	std::string	to_find = av[2];
	std::string	replacement = av[3];
	if (!file.length() || !to_find.length() || !replacement.length())
		return use_error();

	std::stringstream	ss;
	ss << av[1] << ".replace";
	std::ifstream		file_stream(av[1]);
	if (!file_stream){
		std::cout << "Error: File can't be oppened" << std::endl;
		return 1;
	}
	std::ofstream		file_stream_replace(ss.str());
	file_recreate(ss, file_stream, file_stream_replace, to_find, replacement);
	return 0;
}
