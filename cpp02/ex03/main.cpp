/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:37:36 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/02 12:51:00 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.hpp"

bool	tryparse(const std::string &token) {
	bool is_number = false;
	for (unsigned i = 0; i < token.size(); i++) {
		if (!std::isdigit(token[i]))
			is_number = false;
		else
			is_number = true;
	}
	return is_number;
}

int		check_priority(const std::string &s) {
	if (s == "^")
		return 3;
	if (s == "*" || s == "/")
		return 2;
	if (s == "+" || s == "-")
		return 1;
	else
		return 0;
}

bool	is_operator(const std::string &s) {
	return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
}

int		main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Please enter a single arithmetic expression using quote with spaces between each element: \"( 2 + 4 ) * ( 4 + 6 )\"" << std::endl;
		return 1;
	}
	std::string infix = av[1];
	std::vector<std::string> tokens;
	std::istringstream infix_ss(infix);
	while (infix_ss) {
		std::string tmp;
		infix_ss >> tmp;
		tokens.push_back(tmp);
	}
	std::vector<std::string>	output;
	std::stack<std::string> 	stack;
	for (unsigned i = 0; i < tokens.size(); i++) {
		if (tryparse(tokens[i]))
			output.push_back(tokens[i]);
		if (tokens[i] == "(")
			stack.push(tokens[i]);
		if (tokens[i] == ")") {
			while (!stack.empty() && stack.top() != "(") {
				output.push_back(stack.top());
				stack.pop();
			}
			stack.pop();
		}
		if (is_operator(tokens[i]) == true) {
			while (!stack.empty() && check_priority(stack.top()) >= check_priority(tokens[i])) {
				output.push_back(stack.top());
				stack.pop();
			}
			stack.push(tokens[i]);
		}
	}
	while (!stack.empty()) {
		output.push_back(stack.top());
		stack.pop();
	}
	return calculator(output);
}