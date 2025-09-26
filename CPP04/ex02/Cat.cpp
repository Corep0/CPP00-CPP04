/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:43:14 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 15:19:08 by seruff           ###   ########.fr       */
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
	std::cout << "Cat constructor is called" << std::endl;
	Animal::setType("cat");
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
	delete(_brain);
}

Cat::Cat(Cat const& copy): Animal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Assignement operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}
