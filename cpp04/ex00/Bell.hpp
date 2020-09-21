/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:38:54 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:25 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BELL_HPP
# define BELL_HPP

# include "Victim.hpp"

class	Bell: public Victim {
private:
	;
public:
	Bell(std::string name);
	Bell(const Bell &c);
	virtual ~Bell();

	virtual void	getPolymorphed() const;
};

#endif
