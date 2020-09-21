/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 08:30:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/24 11:33:31 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*to_upper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return str;
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *\n";
		return 0;
	}
	while (av[i])
	{
		std::cout << to_upper(av[i]) << " ";
		i++;
	}
	std::cout << "\n";
	return 0;
}