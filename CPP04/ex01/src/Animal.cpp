/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:44:14 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:53:00 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/

Animal::Animal(void)
{
	std::cout << "Animal constructor is called by default" << std::endl;
	this->type = "random";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copied constructor called" << std::endl;
	this->type = copy.type;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*
 * Member Function
*/
void	Animal::makeSound(void) const
{
	std::cout << "..hearing ..kind of ..noise " << std::endl;
}

/*
 * Getter | Setter
*/
void	Animal::setType(std::string type)
{
	this->type = type;
}

const std::string	Animal::getType(void) const
{
	return (this->type);
}
