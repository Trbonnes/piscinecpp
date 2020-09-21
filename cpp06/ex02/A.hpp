/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:32:22 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 10:32:23 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class	A: public Base {
private:
	;
public:
	A();
	A(const A &c);
	/*virtual*/ ~A();
	A &operator=(const A &c);
};

#endif
