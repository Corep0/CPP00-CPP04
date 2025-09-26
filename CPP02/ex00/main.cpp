/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:02:18 by seruff            #+#    #+#             */
/*   Updated: 2025/09/19 10:08:41 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
