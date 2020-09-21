/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:57:52 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 10:47:24 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

const static std::string FORM_REQUEST[3] = {
	"presidential pardon",
	"robotomy request",
	"shrubbery creation"
};

CentralBureaucracy::CentralBureaucracy() {
	for (int i = 0; i < 20; i++) {
		Intern intern;
		Bureaucracy[i].setNewIntern(intern);
		Bureaucracy[i].setNullSigning();
		Bureaucracy[i].setNullExecutor();
	}
	std::string	empty;
	for (int i = 0; i < 100; i++) {
		queu[i] = empty;
	}
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &c) {
	for (int i = 0; i < 20; i++) {
		Intern intern;
		Bureaucracy[i].setNewIntern(intern);
		if (c.Bureaucracy[i].isSigning())
			Bureaucracy[i].setNewSigning(Bureaucrat(*c.Bureaucracy[i].getSigning()));
		else
			Bureaucracy[i].setNullSigning();
		if (c.Bureaucracy[i].isExecutor())
			Bureaucracy[i].setNewExecutor(Bureaucrat(*c.Bureaucracy[i].getExecutor()));
		else
			Bureaucracy[i].setNullExecutor();
	}
	for (int i = 0; i < 100; i++) {
		queu[i] = c.queu[i];
	}
}

CentralBureaucracy::~CentralBureaucracy() {
}

CentralBureaucracy &CentralBureaucracy::operator=(const CentralBureaucracy &c) {
	for (int i = 0; i < 20; i++) {
		Intern intern;
		Bureaucracy[i].setNewIntern(intern);
		if (c.Bureaucracy[i].isSigning())
			Bureaucracy[i].setNewSigning(Bureaucrat(*c.Bureaucracy[i].getSigning()));
		else
			Bureaucracy[i].setNullSigning();
		if (c.Bureaucracy[i].isExecutor())
			Bureaucracy[i].setNewExecutor(Bureaucrat(*c.Bureaucracy[i].getExecutor()));
		else
			Bureaucracy[i].setNullExecutor();
	}
	for (int i = 0; i < 100; i++) {
		queu[i] = c.queu[i];
	}
	return *this;
}

void	CentralBureaucracy::feedBureaucrat(const Bureaucrat &b) {
	int i;
	for (i = 0; i < 20; i++) {
		if (Bureaucracy[i].isSigning() == false) {
			Bureaucracy[i].setNewSigning(b);
			break ;
		}
		else if (Bureaucracy[i].isExecutor() == false) {
			Bureaucracy[i].setNewExecutor(b);
			break ;
		}
	}
	if (i == 20)
		throw NoOfficeSeatLeftException();
}

void	CentralBureaucracy::queuUP(std::string name) {
	int i;
	for (i = 0; i < 100 && queu[i].length(); i++);
	if (i >= 100)
		throw QueuFullException();
	else
		queu[i] = name;
}

void	CentralBureaucracy::doBureaucracy() {
	int	occupied_offices = 0;
	while (occupied_offices < 20 && Bureaucracy[occupied_offices].isExecutor() && Bureaucracy[occupied_offices].isSigning())
		occupied_offices++;
	for (int i = 0; i < 100; i++) {
		if (queu[i].length()) {
			std::string empty;
			Bureaucracy[rand() % occupied_offices].doBureaucracy(FORM_REQUEST[rand() % 3], queu[i]);
			queu[i] = empty;
		}
	}
}

const char	*CentralBureaucracy::NoOfficeSeatLeftException::what() const throw() {
	return "All the seats in the office are taken, can't hire this Bureaucrat.";
}

const char	*CentralBureaucracy::QueuFullException::what() const throw() {
	return "The office queu is full can't take any more demand.";
}
