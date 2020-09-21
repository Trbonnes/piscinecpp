/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:37:13 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:15:57 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice: public AMateria {
private:
	;
public:
	Ice();
	Ice(const Ice &c);
	/*virtual*/ ~Ice();
	Ice &operator=(const Ice &c);

	Ice			*clone();
	void		use(ICharacter &target);
};

#endif
