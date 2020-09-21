/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:04:31 by trbonnes          #+#    #+#             */
/*   Updated: 2020/08/12 16:43:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

const	std::string CHECK[] = {
	"+inf",
	"-inf",
	"nan",
	"+inff",
	"-inff",
	"nanf"
};

const char	*BadArgumentException::what() const throw() {
	return "Please, enter a C++ litteral value, example: \'+\', 42, 42.0, 42.0f, nan, nanf";
}

const char	*ImpossibleIntException::what() const throw() {
	return "char: impossible\nint: impossible";
}

bool	getdecimal(float &f) {
	float n = floor(f);
	float decimal = f - n;

	if (decimal != 0)
		return true;
	return false; 
}

bool	checkstring(std::string &s) {
	unsigned i;
	
	if (s.length() > 1) {
		for (i = 0; i < 6; i++) {
			if (CHECK[i] == s)
				break ;
		}
		if (i >= 6) {
			if (!std::isdigit(s[0]) && s[0] != '+' && s[0] != '-')
				return false;
			for (i = 1; i < s.length(); i++) {
				if (!std::isdigit(s[i]) && i < s.length() - 1 && s[i] != '.')
					return false;
				if (!std::isdigit(s[i]) && i == s.length() - 1 && s[i] != 'f')
					return false;
			}
		}
	}
	return true;
}

int		handleSingleChar(std::string &infix) {
	int		i = infix[0];
	float	f = float(i);
	double	d = double(i);
	
	std::cout << "char: \'" << infix[0] << "\'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;

	return 0;
}

int		main(int ac, char **av) {
	std::string infix;
	try {
		if (ac != 2)
			throw BadArgumentException();
		infix = av[1];
		if (!checkstring(infix))
			throw BadArgumentException();
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	if (std::isprint(infix[0]) && !std::isdigit(infix[0]) && infix.length() <= 1)
		return handleSingleChar(infix);
	if ((std::stold(infix) > MAXFLOAT || std::stold(infix) < __FLT_MIN__)
	&& stold(infix) != 0 && stold(infix) != INFINITY && stold(infix) != -INFINITY) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" <<std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return 0;
	}
	float	f = std::stof(infix);
	double	d = std::stod(infix);
	try {
		if (!std::isnan(f) && !std::isinf(f)) {
			if (std::stol(infix) < INT_MIN || std::stol(infix) > INT_MAX)
				throw ImpossibleIntException();
				
			int i = std::stoi(infix);
			
			if (i >= 0 && i <= 127) {
				if (i >= ' ' && i <= 126)
					std::cout << "char: \'" << (char)i << "\'" << std::endl;
				else
					std::cout << "char: non displayable char" << std::endl;
			}
			else
				std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << i << std::endl;
		}
		else
			throw ImpossibleIntException();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (std::isnan(f) || std::isinf(f)) {
		if (std::isnan(f)) {
			std::cout << "float: nan" << "f" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else if (f < 0) {
			std::cout << "float: -inf" << "f" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else {
			std::cout << "float: +inf" << "f" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
	}
	else if (getdecimal(f)) {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
}