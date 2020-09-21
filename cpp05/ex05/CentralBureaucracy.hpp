/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:57:55 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 09:59:55 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "OfficeBlock.hpp"

class	CentralBureaucracy {
private:
	OfficeBlock	Bureaucracy[20];
	std::string	queu[100];
public:
	CentralBureaucracy();
	CentralBureaucracy(const CentralBureaucracy &c);
	/*virtual*/ ~CentralBureaucracy();
	CentralBureaucracy &operator=(const CentralBureaucracy &c);

	void	feedBureaucrat(const Bureaucrat &b);
	void	queuUP(std::string name);
	void	doBureaucracy();

	class	QueuFullException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	NoOfficeSeatLeftException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

#endif
