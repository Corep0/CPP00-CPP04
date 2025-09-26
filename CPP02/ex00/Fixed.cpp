/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:11:16 by seruff            #+#    #+#             */
/*   Updated: 2025/09/19 11:21:31 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::fract_bits = 8;

Fixed::Fixed(void) : fixed_point(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{

	std::cout << "Copy Constructor called" << std::endl;
	this->fixed_point = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw << fract_bits;
	std::cout << "setRawBits called" << std::endl;
}
