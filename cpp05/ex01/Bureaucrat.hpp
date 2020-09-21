/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 08:13:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 09:47:02 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat {
private:
	std::string const	_name;
	int					_grade;
	
	Bureaucrat &operator=(const Bureaucrat &c);
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &c);
	/*virtual*/ ~Bureaucrat();

	class 	GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	int					getGrade() const;

	void				incrementGrade();
	void				decrementGrade();
	void				signForm(int i, std::string formName);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &s);

#endif
