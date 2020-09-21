/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:26:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 12:26:13 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator: public ISpaceMarine {
private:
	;
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &c);
	/*virtual*/ ~AssaultTerminator();
	AssaultTerminator &operator=(const AssaultTerminator &c);

	virtual AssaultTerminator* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
