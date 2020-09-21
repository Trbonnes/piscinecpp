/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:32:34 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 10:32:34 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class	B: public Base {
private:
	;
public:
	B();
	B(const B &c);
	/*virtual*/ ~B();
	B &operator=(const B &c);
};

#endif
