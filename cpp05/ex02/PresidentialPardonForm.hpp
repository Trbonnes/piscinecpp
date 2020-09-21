/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:02:49 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:24:46 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm: public Form {
private:
	const std::string _target;
	
	PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &c);
	/*virtual*/ ~PresidentialPardonForm();
	
	const std::string	&getTarget() const;
	virtual void		execute(Bureaucrat const &executor) const;
};

#endif
