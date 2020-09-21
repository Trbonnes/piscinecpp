/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 11:50:53 by trombone          #+#    #+#             */
/*   Updated: 2020/09/14 11:19:19 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>

template<typename T, typename Container = std::list<T> >
class	MutantStack: public std::stack<T> {
private:
	Container _ctnr;
public:
	typedef T value_type;
	typedef Container container_type;
	typedef typename Container::size_type size_type;
	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;


	explicit MutantStack(const container_type &ctnr = container_type()): _ctnr(ctnr) {
	}

	MutantStack(const MutantStack &c): _ctnr(c._ctnr) {
	}

	~MutantStack() {
	}

	MutantStack &operator=(const MutantStack &c) {
		_ctnr = c.ctnr;
		return *this;
	}

	bool	empty() const {
		return _ctnr.empty();
	}

	size_type size() const {
		return _ctnr.size();
	}

	value_type& top() {
		return _ctnr.front();
	}

	const value_type&	top() const {
		return _ctnr.front();
	}

	void	push(const value_type &val) {
		_ctnr.push_front(val);
	}

	void	pop() {
		_ctnr.pop_front();
	}

	iterator	begin() {
		return _ctnr.begin();
	}

	const_iterator	begin() const {
		return _ctnr.begin();
	}

	iterator	end() {
		return _ctnr.end();
	}

	const_iterator	end() const {
		return _ctnr.end();
	}

	reverse_iterator	rbegin() {
		return _ctnr.rbegin();
	}

	const_reverse_iterator	rbegin() const {
		return _ctnr.rbegin();
	}

	reverse_iterator	rend() {
		return _ctnr.rend();
	}

	const_reverse_iterator	rend() const {
		return _ctnr.rend();
	}


};

#endif
