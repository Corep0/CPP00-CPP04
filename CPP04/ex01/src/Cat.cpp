/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:43:14 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:12:53 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/

Cat::Cat(void): Animal(), brain(new Brain)
{
	std::cout << "Cat constructor is called by default" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
	delete (this->brain);
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Clone constructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

const std::string& Cat::get_idea(std::size_t index) const
{
	return (this->brain->get_ideas(index));
}

void	Cat::set_idea(std::size_t index, const std::string& idea)
{
	this->brain->set_ideasInBrain(index, idea);
}

