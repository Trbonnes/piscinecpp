/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trombone <trombone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 10:58:22 by trombone          #+#    #+#             */
/*   Updated: 2020/03/15 11:36:52 by trombone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class	NotFoundException: public std::exception {
    public:
        virtual const char* what() const throw();
};

template<typename T>
int easyfind(T a, int b) {
    typename T::iterator found = std::find(a.begin(), a.end(), b);
    if (found == a.end())
        throw NotFoundException();
    return *found;
}

#endif
