/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:56:22 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 16:24:23 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter {
private:
	std::string _name;
	AMateria	*_equipement[4];
public:
	Character();
	Character(std::string const &name);
	Character(const Character &c);
	/*virtual*/ ~Character();
	Character &operator=(const Character &c);

	std::string const & getName() const;
	
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
