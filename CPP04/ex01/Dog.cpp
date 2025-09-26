/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:31:51 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 14:03:29 by seruff           ###   ########.fr       */
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
	std::cout << "Dog constructor is called" << std::endl;
	Animal::setType("dog");
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor is called" << std::endl;
	delete(_brain);
}

Dog::Dog(Dog const& copy): Animal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog other)
{
	std::cout << "Assignement operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}
