/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:30:23 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 12:05:11 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	// Main test
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	// Compare :	
	Fixed	c(2);
	Fixed	d(4);
	Fixed	bigger = Fixed::max(c, d);
	Fixed	smaller = Fixed::min(c, d);

	std::cout << "c: " << c.toInt() << std::endl;
	std::cout << "d: " << d.toInt() << std::endl;
	std::cout << "Bigger is : " << bigger << std::endl;
	std::cout << "Smaller is : " << smaller << std::endl;

	// Operations :
	Fixed	add = (c + d);		
	Fixed	sub = (c - d);		
	Fixed	multiply = (c * d);		
	Fixed	divide = (c / d);		
	
	std::cout << "Addition\n" << "c + d : " << add << std::endl;
	std::cout << "Substract\n" << "c - d : " << sub << std::endl;
	std::cout << "Multiply\n" << "c * d: " << multiply << std::endl;
	std::cout << "Divide\n" << "c / d: " << divide << std::endl;

	// Post : Increment | Decrement, Pre : Increment | Decrement
	Fixed	post_increment = c++;
	Fixed	post_decrement = c--;
	Fixed	pre_increment = d++;
	Fixed	pre_decrement = d--;
	std::cout << "Post Increment\n" << "c++: " << post_increment << std::endl;
	std::cout << "Post Decrement\n" << "c--: " << post_decrement << std::endl;
	std::cout << "Pre Increment\n" << "++d: " << pre_increment << std::endl;
	std::cout << "Pre Decrement\n" << "--d: " << pre_decrement << std::endl;
	return (0);
}
