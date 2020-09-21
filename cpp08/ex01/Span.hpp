/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:50:47 by trombone          #+#    #+#             */
/*   Updated: 2020/09/14 16:07:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class	Span {
private:
	size_t				_intNumber;
	std::vector<int>	_vec;
public:
	Span();
	Span(size_t const &n);
	Span(const Span &c);
	/*virtual*/ ~Span();
	Span &operator=(const Span &c);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();


	template<typename InputIterator>
	void	addMultiple(InputIterator begin, InputIterator end) {
		if (!_vec.size())
			_vec.assign(begin, end);
		else
			_vec.insert(_vec.end(), begin, end);
		if (_vec.size() > _intNumber)
			throw ClassFullException();

		// for (int i = 0; i < _vec.size(); i++) {
		// 	std::cout << _vec[i] << std::endl;
		// }
	}

/*

	---- REWRITING OF THE DISPATCHING : InputIterator VS n & val ----

	typedef size_t size_type;
	typedef int value_type;

	class _true_type {};
	class _false_type {};

	// _is_integer_trait is a trait
	template <typename T>
	struct _is_integer_trait {
		typedef _false_type type; // default = false for every type
	};

	// specialization for int
	template <>
	struct _is_integer_trait<int> {
		typedef _true_type type; // true for int
	};


	template <typename InputIterator>
	void _addMultipleRange(InputIterator begin, InputIterator end) {
		std::cout << "RANGE" << std::endl;
	}

	void _addMultipleFill(size_type n, const value_type& val) {
		std::cout << "FILL" << std::endl;
	}


	template <typename InputIterator>
	void _addMultiple(InputIterator begin, InputIterator end, _true_type) { _addMultipleFill(begin, end); }
	template <typename InputIterator>
	void _addMultiple(InputIterator begin, InputIterator end, _false_type) { _addMultipleRange(begin, end); }

	template <typename InputIterator>
	void addMultiple(InputIterator begin, InputIterator end) {
		typedef typename _is_integer_trait<InputIterator>::type IsIntegral;
		_addMultiple(begin, end, IsIntegral());
	}

	void addMultiple(size_type n, const value_type& val) {
		_addMultipleFill(n, val);
	}
*/

	class	ClassFullException: public std::exception {
    public:
        virtual const char* what() const throw();
	};

	class	NoSpanException: public std::exception {
    public:
        virtual const char* what() const throw();
	};
};


#endif
