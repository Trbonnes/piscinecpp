/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:19:04 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 10:25:24 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void) {
	Logger	logger;

	logger.log("logToConsole", "This is a Console test");
	logger.log("logToConsole", "This is a Console test_2");
	logger.log("logToFile", "This is a File test");
	logger.log("logToFile", "This is a File test_2");
	return 0;
}