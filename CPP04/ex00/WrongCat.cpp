/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:29:10 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 10:32:25 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat constructor is called by default" << std::endl;
	setType("WrongCat");
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy): WrongAnimal(copy)
{
	std::cout << "Copied constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat other)
{
	std::cout << "Assignement operator called" << std::endl;
	WrongAnimal::operator=(other);
	return (*this);
}
