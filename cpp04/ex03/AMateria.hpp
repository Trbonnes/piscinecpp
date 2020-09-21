/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:12:24 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:23:11 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria {
protected:
	void	setType(std::string type);
	void	setXp(unsigned int xp);
private:
	std::string		_type;
	unsigned int	_xp;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &c);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &c);

	std::string const	&getType() const;
	unsigned int		getXp() const;

	virtual AMateria	*clone() = 0;
	virtual void		use(ICharacter &target);
};

#endif
