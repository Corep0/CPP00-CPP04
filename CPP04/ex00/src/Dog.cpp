/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:31:51 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:19:25 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/

Dog::Dog(void): Animal()
{
	std::cout << "Dog constructor is called by default" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
	this->type = copy.type;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf wouf.." << std::endl;
}
