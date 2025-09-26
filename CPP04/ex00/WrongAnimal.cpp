/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:29:36 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 10:44:43 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor is called by default" << std::endl;
	this->type = "WrongCat";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	std::cout << "Copied constructor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*
 * Member Function
*/
void	WrongAnimal::makeWrongSound(void) const
{
	if (this->type == "WrongCat")
		std::cout << "chirping sound cause it's a wrong cat.. might be a bird as well" << std::endl;
	else
		std::cout << ".. .. .. " << std::endl;
}

/*
 * Getter | Setter
*/

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
