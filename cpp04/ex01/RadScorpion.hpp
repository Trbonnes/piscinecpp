/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:03 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:04 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion: public Enemy {
private:
	;
public:
	RadScorpion();
	RadScorpion(const RadScorpion &c);
	/*virtual*/ ~RadScorpion();
	RadScorpion &operator=(const RadScorpion &c);
};

#endif
