/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:18:13 by seruff            #+#    #+#             */
/*   Updated: 2025/09/22 11:07:18 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		// Constructor | Destructor | Constructor INT/FLOAT
		Fixed();
		Fixed(int fixed);
		Fixed(float fixed);
		~Fixed();
		Fixed(const Fixed &copy);

		/*
		 * Operators : 
		*/
		// Operator assignement value (fixed_point)
		Fixed& operator=(const Fixed other);
		// Operator compare value (fixed_point)
		bool	operator<(Fixed const &src) const;
		bool	operator>(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;
		//Fixed& operator*(const Fixed src);
		Fixed operator+(const Fixed src);
		Fixed operator*(const Fixed src);
		Fixed operator-(const Fixed src);
		Fixed operator/(const Fixed src);

		// Increment | Decrement PRE
		Fixed operator++(void);
		Fixed operator--(void);
		// Increment | Decrement POST
		Fixed operator++(int);
		Fixed operator--(int);

		// Getter | Setter
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		// Converter Fixed_point(bits) to INT and FLOAT
		int	toInt(void) const;
		float	toFloat(void) const;

		// Min|Max const and not const
		static const Fixed&		min(const Fixed& a, const Fixed& b); 
		static const Fixed& 		max(const Fixed& a, const Fixed& b);
		static Fixed&		min(Fixed& a, Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);

	private:
		static const int	fract_bits;
		int	fixed_point;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif //FIXED_HPP
