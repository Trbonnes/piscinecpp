/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:51:36 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:43:55 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Sorcerer {
private:
	std::string	_name;
	std::string	_title;
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &s);
	~Sorcerer();

    const std::string &getName() const;
    const std::string &getTitle() const;

	void polymorph(Victim const &c) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &s);

#endif
