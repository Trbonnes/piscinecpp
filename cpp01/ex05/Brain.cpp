/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:33:24 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/26 08:36:13 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void		Brain::hyper_smart_reflexion(){
	std::cout <<"  ..---.." << std::endl;
	std::cout <<" /       \\" << std::endl;
	std::cout <<"|         |" << std::endl;
	std::cout <<":         ;" << std::endl;
	std::cout <<" \\  \\~/  /" << std::endl;
	std::cout <<"  `, Y ,'" << std::endl;
	std::cout <<"   |_|_|" << std::endl;
	std::cout <<"   |===|" << std::endl;
	std::cout <<"   |===|" << std::endl;
	std::cout <<"    \\_/" << std::endl;
	std::cout << "What a great Idea !" << std::endl;
}

std::string	Brain::identify() const {
	std::stringstream ss;

	ss << "0x" << std::hex << (unsigned long)this; 
	return ss.str();
}
