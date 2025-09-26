/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:53:06 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 09:13:25 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "Memory Adress of str: " << &str << std::endl;
	std::cout << "Memory Adress of ptr: " << &ptr << std::endl;
	std::cout << "Memory Adress of ref: " << &ref << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of ptr: " << *ptr << std::endl;
	std::cout << "Value of ref: " << ref << std::endl;
	return (0);
}
