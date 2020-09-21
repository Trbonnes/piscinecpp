/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:47:08 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 10:34:20 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class	OfficeBlock: public Intern, public Bureaucrat {
private:
	Intern		*_intern;
	Bureaucrat	*_signing_b;
	Bureaucrat	*_executing_b;
public:
	OfficeBlock();
	OfficeBlock(const Intern &intern, const Bureaucrat &signing_b, const Bureaucrat &executing_b);
	/*virtual*/ ~OfficeBlock();

	class	NoInternException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	NoSigningException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	NoExecutingException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	InternWrongForm: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	void	setNewIntern(const Intern &intern);
	void	setNewSigning(const Bureaucrat &signing);
	void	setNewExecutor(const Bureaucrat &executor);
	void	setNullExecutor();
	void	setNullSigning();

	bool	isSigning() const;
	bool	isExecutor() const;

	const Bureaucrat	*getSigning() const;
	const Bureaucrat	*getExecutor() const;

	void	doBureaucracy(std::string formName, std::string target) const;
};

#endif
