/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:34:30 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:19:42 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource {
private:
	AMateria	*_equipement[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &c);
	/*virtual*/ ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &c);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif
