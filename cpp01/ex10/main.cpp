/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:42:45 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 11:10:19 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "catoninetails.hpp"

void	ft_stdin() {
	for (std::string line; std::getline(std::cin, line);)
		std::cout << line << std::endl;
}

int	main(int ac, char **av) {
	bool err = false;

	if (ac < 2) {
		ft_stdin();
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		std::string file_name = av[i];
		if (file_name == "-")
			ft_stdin();
		else {
			std::ifstream 	file_stream(file_name);
			if (!file_stream) {
				std::cerr << av[0] << ": " << file_name << ": No such file or directory" << std::endl;
				err = true;
			}
			else {
				for (std::string line; std::getline(file_stream, line);) {
					std::cout << line << std::endl;
				}
			}
		}
	}
	return err ? 1 : 0;
}
