/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:37:29 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 16:30:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>
# include <cstdio>
# include <string>
# include <new>

class Pony {
	public:
		void	pony_do();
};

Pony	*ponyOnTheHeap();
Pony	ponyOnTheStack();

#endif

/* Generally, when something is stored "on the stack", it has automatic storage duration,
which means that it lives for the duration of the current function call.
In contrast, when something is stored "on the heap", it has dynamic storage duration
(hence allocating memory on the heap is called "dynamic memory allocation"),
which means it lives until we explicitly deallocate it, which can be as long or short as we want,
and can live beyond the current function call. Dynamic memory allocation is more flexible,
but is slower and you have to manage its duration manually. */
