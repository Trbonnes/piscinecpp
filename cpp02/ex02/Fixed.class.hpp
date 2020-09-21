/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/02 10:55:16 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <ostream>

class Fixed {
	private:
		int					_raw;
		static const int	_fractionalBitsNumber;
		static const int	_floatShifting;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &n);
		Fixed(const int	&i);
		Fixed(const	float &f);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed 	&operator=(const Fixed &n);
		
		bool	operator>(const Fixed &n) const;
		bool	operator<(const Fixed &n) const;
		bool	operator>=(const Fixed &n) const;
		bool	operator<=(const Fixed &n) const;
		bool	operator==(const Fixed &n) const;
		bool	operator!=(const Fixed &n) const;

		Fixed	operator+(const Fixed &n) const;
		Fixed	operator-(const Fixed &n) const;
		Fixed	operator*(const Fixed &n) const;
		Fixed	operator/(const Fixed &n) const;

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int _i);
		Fixed	operator--(int _i);

		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif
