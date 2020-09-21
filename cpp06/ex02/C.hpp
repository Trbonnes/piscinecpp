/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:32:47 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 10:32:48 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class	C: public Base {
private:
	;
public:
	C();
	C(const C &c);
	/*virtual*/ ~C();
	C &operator=(const C &c);
};

#endif
