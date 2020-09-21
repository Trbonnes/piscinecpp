/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:11:11 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 12:15:53 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine: public ISpaceMarine {
private:
	;
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &c);
	/*virtual*/ ~TacticalMarine();
	TacticalMarine &operator=(const TacticalMarine &c);

	virtual TacticalMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
