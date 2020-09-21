/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:51:43 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:08 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim {
private:
	std::string	_name;
public:
	Victim(std::string name);
	Victim(const Victim &c);
	virtual ~Victim();

	const std::string &getName() const;

	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &c);

#endif
