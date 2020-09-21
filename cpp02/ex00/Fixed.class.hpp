/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:12:48 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/28 09:48:12 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {
	private:
		int					_raw;
		static const int	_fractionalBitsNumber;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &n);
		
		Fixed 	&operator=(const Fixed &n);

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
