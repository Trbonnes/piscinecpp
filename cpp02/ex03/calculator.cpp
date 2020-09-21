/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:20:31 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/02 12:52:12 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.hpp"

bool	is_number(const std::string &token) {
	bool is_number = false;
	for (unsigned i = 0; i < token.size(); i++) {
		if (!std::isdigit(token[i]))
			is_number = false;
		else
			is_number = true;
	}
	return is_number;
}

int		calculator(std::vector<std::string>	&expression) {
	std::stack<Fixed>	stack;
	float				n;
	Fixed				result;

	for (unsigned i = 0; i < expression.size(); i++) {
		if (is_number(expression[i]) == true) {
			n = std::atof(expression[i].c_str());
			Fixed nb(n);
			stack.push(n);
		}
		if (expression[i] == "+") {
			Fixed x(stack.top());
			stack.pop();
			Fixed y(stack.top());
			stack.pop();
			result = x.toFloat() + y.toFloat();
			stack.push(result);
		}
		if (expression[i] == "-") {
			Fixed x(stack.top());
			stack.pop();
			Fixed y(stack.top());
			stack.pop();
			result = y.toFloat() - x.toFloat();
			stack.push(result);

		}
		if (expression[i] == "*") {
			Fixed x(stack.top());
			stack.pop();
			Fixed y(stack.top());
			stack.pop();
			result = x.toFloat() * y.toFloat();
			stack.push(result);
		}
		if (expression[i] == "/") {
			Fixed x(stack.top());
			stack.pop();
			Fixed y(stack.top());
			stack.pop();
			result = y / x;
			stack.push(result);
		}
		if (expression[i] == "^") {
			Fixed x(stack.top());
			stack.pop();
			Fixed y(stack.top());
			stack.pop();
			result = y;
			if (x > 0)
				for (int i = 1; i <= x.toInt(); i++)
					result = result.toFloat() * y.toFloat();
			else
				for (int i = 1; i >= x.toInt(); i++)
					result = result.toFloat() / y.toFloat();
			stack.push(result);
		}
	}
	result = stack.top();
	stack.pop();
	std::cout << result.toFloat() << std::endl;
	return 0;
}
