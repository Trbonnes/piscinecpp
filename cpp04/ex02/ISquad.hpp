/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:00:12 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 11:12:18 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class	ISquad {
public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine *getUnit(int unit) const = 0;
        virtual int push(ISpaceMarine *el) = 0;
};

#endif
