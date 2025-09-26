/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:44:14 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 14:59:25 by seruff           ###   ########.fr       */
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
	std::cout << "Animal constructor is called" << std::endl;
	this->type = "dog";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(Animal const& copy)
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
	if (this->type == "dog")
		std::cout << "woof woof" << std::endl;
	else if (this->type == "cat")
		std::cout << "meow meow" << std::endl;
	else
		std::cout << ".. .. .. " << std::endl;
}

/*
 * Getter | Setter
*/
void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
