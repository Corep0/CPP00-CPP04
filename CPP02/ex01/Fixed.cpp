/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:18:03 by seruff            #+#    #+#             */
/*   Updated: 2025/09/19 12:11:06 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_bits = 8; 

Fixed::Fixed():fixed_point(0)
{
	std::cout << "Constructor is called" << std::endl;
}

Fixed::Fixed(int n)
{
	std::cout << "INT Constructor is called" << std::endl;
	fixed_point = n << this->fract_bits;
}

Fixed::Fixed(float f)
{
	std::cout << "FLOAT Constructor is called" << std::endl;
	fixed_point = roundf(f * (1 << 8)); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor is called" << std::endl;
	this->fixed_point = copy.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return (*this);
}	

int	Fixed::toInt(void) const
{
	int	new_n;

	new_n = this->fixed_point >> 8;
	return (new_n);
}

float	Fixed::toFloat(void) const
{
	float	new_f;

	new_f = (float)this->fixed_point / (float)(1 << 8);
	return (new_f);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

int	Fixed::getRawBits(void) const
{
	return (fixed_point);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return (out);
}	
