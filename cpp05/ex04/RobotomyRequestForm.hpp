/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:53:15 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/09 11:24:38 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class	RobotomyRequestForm: public Form {
private:
	const std::string _target;

	RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &c);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &c);
	/*virtual*/ ~RobotomyRequestForm();
	
	const std::string	&getTarget() const;
	virtual void		execute(Bureaucrat const &executor) const;
};

#endif
