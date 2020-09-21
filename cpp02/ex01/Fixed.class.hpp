/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 09:52:02 by trbonnes         ###   ########.fr       */
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
		
		Fixed 	&operator=(const Fixed &n);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &n);

#endif
