/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:16:00 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/27 09:26:52 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>

class Human {
	private:
		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	intimidatingShout(std::string const &target);

		struct fct_ptr{
			std::string	fct_name;
			void		(Human::*fn)(std::string const &target);
		};
		static const fct_ptr fct_tab[3];
	public:
		void	action(std::string const &action_name, std::string const &target);
};

#endif
