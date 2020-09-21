/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:43:25 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:16:02 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure: public AMateria {
private:
	;
public:
	Cure();
	Cure(const Cure &c);
	/*virtual*/ ~Cure();
	Cure &operator=(const Cure &c);

	Cure		*clone();
	void		use(ICharacter &target);
};

#endif
