/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:34:51 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 11:41:06 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class	Squad: public ISquad {
private:
	struct	_marine {
		ISpaceMarine	*el;
		_marine			*next;
	};

	int		_count;
	_marine *_lst;

	_marine *lst_cpy(_marine *lst);
	void	lst_destroy(_marine *lst);
public:
	Squad();
	Squad(const Squad &c);
	/*virtual*/ ~Squad();
	Squad &operator=(const Squad &c);

	virtual int getCount() const ;
	virtual ISpaceMarine *getUnit(int unit) const;
	virtual int push(ISpaceMarine *el);
};

#endif
