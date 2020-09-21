/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:33:16 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:19:39 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
