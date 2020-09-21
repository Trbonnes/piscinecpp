/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:52:23 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 13:30:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <new>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(std::string type);

		void	setZombieType(std::string type);
		void	randomChump();

		Zombie	*newZombie(std::string name);
	private:
		std::string _type;
};

#endif
