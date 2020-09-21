/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:58:44 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 10:37:16 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

std::string	&Logger::getFileName() {
	return file_name;
}

void    Logger::addTimestamp(std::stringstream &ss) {
    time_t      timer;
    struct tm   *t;

    time(&timer);
    t = localtime(&timer);
    ss << "[";
    ss << t->tm_year + 1900 << t->tm_mon + 1 << t->tm_mday;
    ss << "_";
    ss << t->tm_hour << t->tm_min << t->tm_sec;
    ss << "]";
}

const Logger::fct_ptr Logger::fct_tab[] = {
	{"logToConsole", &Logger::logToConsole},
	{"logToFile", &Logger::logToFile}
};

void	Logger::logToConsole(std::string const &s) {
	std::cout << s;
}

void	Logger::logToFile(std::string const &s) {
	Logger::file_name = "logger.log";
	std::ofstream	log_file(Logger::file_name.c_str(), std::ios::app);
	log_file << s;
}

std::string	Logger::makeLogEntry(std::string const &s) {
	std::stringstream ss;
	addTimestamp(ss);
	ss << " <trbonnes@student.42.fr> " << s << std::endl;
	return ss.str();
}

void	Logger::log(std::string const &dest, std::string const &message) {
	for (int i = 0 ; i < 2 ; i++) {
		if (Logger::fct_tab[i].fct_name == dest) {
			(this->*fct_tab[i].fn)(makeLogEntry(message));
			break ;
		}
	}
}
