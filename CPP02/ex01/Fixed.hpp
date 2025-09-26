/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:18:13 by seruff            #+#    #+#             */
/*   Updated: 2025/09/19 12:04:31 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(int fixed);
		Fixed(float fixed);
		~Fixed();
		Fixed(const Fixed &copy);

		Fixed& operator=(const Fixed other);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	private:
		static const int	fract_bits;
		int	fixed_point;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif //FIXED_HPP
