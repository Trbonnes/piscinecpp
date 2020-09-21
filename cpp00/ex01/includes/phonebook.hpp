/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:32:06 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/24 15:05:10 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdio>
# include <string>

class Contact {
	private:
		std::string first_name, last_name, nickname, login, postal_address,
		email, phone_number, birthday, fav_meal, underwear_color, darkest_secret;

	public:
		Contact();

		void	get_contact_info();
		void	display_searching(int number);
		void	display_column(std::string &s);
		void	display_full();
};

#endif
