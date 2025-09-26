/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:02:44 by seruff            #+#    #+#             */
/*   Updated: 2025/09/19 11:17:20 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator=(const Fixed &other);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	fixed_point;
		static int const fract_bits;

};

#endif	//FIXED_HPP
