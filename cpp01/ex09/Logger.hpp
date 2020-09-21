/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:29:06 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 10:12:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <ctime>

class Logger {
	private:
		std::string file_name;

		struct		fct_ptr{
			std::string	fct_name;
			void		(Logger::*fn)(std::string const &s);
		};
		static const fct_ptr	fct_tab[];

		void		addTimestamp(std::stringstream &ss);
		void		logToConsole(std::string const &s);
		void		logToFile(std::string const &s);
		std::string	makeLogEntry(std::string const &s);
	public:
		void			log(std::string const &dest, std::string const &message);
		std::string		&getFileName();
};


#endif
