/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:31:05 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 11:59:15 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void	ft_stdin(std::string &s){

	std::cout << "> ";
	std::getline(std::cin, s);
}

Contact::Contact(){
}

void	Contact::get_contact_info(){
	std::cout << "Enter his/her first name" << std::endl;
	ft_stdin(first_name);
	std::cout << "Enter his/her last name" << std::endl;
	ft_stdin(last_name);
	std::cout << "Enter his/her nickname" << std::endl;
	ft_stdin(nickname);
	std::cout << "Enter his/her login" << std::endl;
	ft_stdin(login);
	std::cout << "Enter his/her postal address" << std::endl;
	ft_stdin(postal_address);
	std::cout << "Enter his/her email address" << std::endl;
	ft_stdin(email);
	std::cout << "Enter his/her phone number" << std::endl;
	ft_stdin(phone_number);
	std::cout << "Enter his/her birthday date" << std::endl;
	ft_stdin(birthday);
	std::cout << "Enter his/her favorite meal" << std::endl;
	ft_stdin(fav_meal);
	std::cout << "Enter the color of his/her underwear" << std::endl;
	ft_stdin(underwear_color);
	std::cout << "Enter his/her darkest secret" << std::endl;
	ft_stdin(darkest_secret);
	std::cout << "Contact saved" << std::endl;
}

void	Contact::display_column(std::string &s){
	if (s.length() > 10){
		for (std::string::size_type i = 0 ; i < 9 ; i++)
			std::cout << s[i];
		std::cout << ".|";
	}
	else{
		for (std::string::size_type i = 0 ; i < 10 - s.length() ; i++)
			std::cout << " ";
		std::cout << s << "|";
	}
}

void	Contact::display_searching(int number){
	std::cout << "|         " << number << "|";
	display_column(first_name);
	display_column(last_name);
	display_column(nickname);
	std::cout << std::endl;
}

void	Contact::display_full(){
	std::cout << std::endl << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal Address: " << postal_address << std::endl;
	std::cout << "Email Address: " << email << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Birthday Date: " << birthday << std::endl;
	std::cout << "Favorite Meal: " << fav_meal << std::endl;
	std::cout << "Underwear Color: " << underwear_color << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl << std::endl;
}

void	search_contact(Contact people[8], int number){
	int			nb;
	std::string	str;
	int			i = -1;
	
	std::cout << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0 ; i < number ; i++){
		people[i].display_searching(i);
	}
	std::cout << "Index of the wanted contact: ";
	std::cin >> str;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9') {
			std::cout << "Index must be a number" << std::endl;
			return ;
		}
	nb = atoi(str.c_str());
	if (nb < 0 || nb >= number)
		std::cout << "Unexisting Contact, add it or search for someone else." << std::endl;
	else
		people[nb].display_full();
}

int 	main () {
	std::string str;
	Contact		people[8];
	int			number = 0;
	
	std::cout << "Welcome to your very own useless phonebook !" << std::endl;
	do {
		std::cout << "What do you want to do ?" << std::endl;
		ft_stdin(str);
		if (str == "ADD"){
			if (number == 8){
				std::cout << "Phonebook full, can't add any contact." << std::endl;
				continue ;
			}
			people[number] = Contact();
			people[number].get_contact_info();
			number++;
		}
		else if (str == "SEARCH"){
			if (number > 0)
				search_contact(people, number);
			else
				std::cout << "No Contact in the phonebook, please add one" << std::endl;
		}
		else if (str != "EXIT")
			std::cout << "Unknow command, please use ADD SEARCH or EXIT" << std::endl;
	} while (str != "EXIT");
	std::cout << "All contacts will be erased." << std::endl << "Goodbye !" << std::endl;
  	return 0;
}
