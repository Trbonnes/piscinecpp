/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:00:23 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 17:32:14 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER
# define IMININGLASER

# include "IAsteroid.hpp"
# include <iostream>

class IMiningLaser {
public:
    virtual ~IMiningLaser() {}
    virtual void mine(IAsteroid *asteroid) = 0;
};

#endif
