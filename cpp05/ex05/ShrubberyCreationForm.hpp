/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:16:32 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:24:33 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm: public Form {
private:
	const std::string _target;

	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &c);
	/*virtual*/ ~ShrubberyCreationForm();
	
	const std::string	&getTarget() const;
	virtual void		execute(Bureaucrat const &executor) const;
	
};

#endif
