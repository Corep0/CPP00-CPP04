/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:18:03 by seruff            #+#    #+#             */
/*   Updated: 2025/09/22 11:12:11 by seruff           ###   ########.fr       */
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

// Convert Fixed_point to INT
int	Fixed::toInt(void) const
{
	int	new_n;

	new_n = this->fixed_point >> 8;
	return (new_n);
}

// Convert Fixed_point to FLOAT
float	Fixed::toFloat(void) const
{
	float	new_f;

	new_f = (float)this->fixed_point / (float)(1 << 8);
	return (new_f);
}

// Setter
void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

// Getter
int	Fixed::getRawBits(void) const
{
	return (fixed_point);
}

// Print float to the output-stream
std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return (out);
}	

/*
 * Implementation of operator such as > < >= <= == !=
 * In C++ we need to have a definition of those actions
*/

bool	Fixed::operator<(Fixed const &src) const
{
	return (this->fixed_point < src.fixed_point);
}

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->fixed_point > src.fixed_point);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->fixed_point >= src.fixed_point);
}

bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->fixed_point <= src.fixed_point);
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->fixed_point == src.fixed_point);
}

bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->fixed_point != src.fixed_point);
}

/*
 * Implementation of arithmetic operatos such as + - * /
*/

Fixed Fixed::operator+(const Fixed src)
{
	Fixed	res;
	res.setRawBits(this->fixed_point + src.fixed_point);
	return (res);
}

Fixed Fixed::operator-(const Fixed src)
{
	Fixed	res;
	res.setRawBits(this->fixed_point - src.fixed_point);
	return (res);
}

Fixed Fixed::operator*(const Fixed src)
{
	Fixed	res;
	res.setRawBits((this->fixed_point * src.fixed_point) >> fract_bits);
	return (res);
}

Fixed Fixed::operator/(const Fixed src)
{
	Fixed	res;
	res.setRawBits((this->fixed_point << fract_bits) / src.fixed_point);
	return (res);
}

/* 
 * Use of operator to compare values
*/
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

/*
 * PRE
 * Incrementation | Decrementation
*/
Fixed Fixed::operator++(void)
{
	this->fixed_point += 1;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->fixed_point -= 1;
	return (*this);
}

/*
 * POST
 * Incrementation | Decrementation
*/
Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->fixed_point += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->fixed_point -= 1;
	return (temp);
}
