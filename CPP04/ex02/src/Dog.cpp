/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:31:51 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:33:29 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/
Dog::Dog(void): Animal(), brain(new Brain)
{
	std::cout << "Dog constructor is called by default" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor is called" << std::endl;
	delete (this->brain);
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Clone constructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

const std::string& Dog::get_idea(std::size_t index) const
{
	return (this->brain->get_ideas(index));
}

void	Dog::set_idea(std::size_t index, const std::string& idea)
{
	this->brain->set_ideasInBrain(index, idea);
}
