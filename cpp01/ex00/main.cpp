/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:30:46 by trbonnes          #+#    #+#             */
/*   Updated: 2020/06/30 12:08:50 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void) {
	Pony *pony_heap = ponyOnTheHeap();
	Pony pony_stack = ponyOnTheStack();

	pony_heap->pony_do();
	pony_stack.pony_do();

	delete pony_heap;
}
