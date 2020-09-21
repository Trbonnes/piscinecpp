/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:34:34 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/05 09:34:35 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class	Enemy {
protected:
	void	setHP(int hp);
	void	setType(std::string type);
private:
	int			_hp;
	std::string	_type;
public:
	Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &c);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &c);

	std::string	getType() const;
	int			getHP() const;

	virtual void	takeDamage(int damage);
};

#endif
