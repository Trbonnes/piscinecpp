/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:56:05 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/04 11:44:18 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon: public Victim {
private:
	;
public:
	Peon(std::string name);
	Peon(const Peon &c);
	virtual ~Peon();

	virtual void	getPolymorphed() const;
};

#endif
