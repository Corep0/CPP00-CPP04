/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:29:36 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:32:16 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor is called by default" << std::endl;
	this->type = "RandomWrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copied constructor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copied " << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*
 * Member Function
*/
void	WrongAnimal::makeWrongSound(void) const
{
	std::cout << "..hearing ..kind of  .. noise" << std::endl;
}

/*
 * Getter | Setter
*/

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

const std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
