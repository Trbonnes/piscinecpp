/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trombone <trombone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 12:35:27 by trombone          #+#    #+#             */
/*   Updated: 2020/03/16 13:11:47 by trombone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <random>

int main() {
    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while(it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "----------/////P2/////----------" << std::endl;

    MutantStack<int> s(mstack);

    std::srand(time(0) * time(0));
    for (int i = 0; i < 42; i++) {
        s.push(rand());
    }

    std::cout << s.empty() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << s.top() << std::endl;

    MutantStack<int>::reverse_iterator rit = s.rbegin();
    MutantStack<int>::reverse_iterator rite = s.rend();

    while(rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }

    MutantStack<int>::size_type size = s.size();

    for (MutantStack<int>::size_type i = 0; i < size; i++) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << s.empty() << std::endl;

    return 0;
}