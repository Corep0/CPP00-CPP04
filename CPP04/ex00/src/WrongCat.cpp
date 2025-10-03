/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:29:10 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:33:04 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat constructor is called by default" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
	this->type = copy.type;	
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMeow WrongMeow.." << std::endl;
}
