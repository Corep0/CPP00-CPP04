/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:43:14 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:19:41 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor is called by default" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(Cat const& copy): Animal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat other)
{
	std::cout << "Assignement operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}
