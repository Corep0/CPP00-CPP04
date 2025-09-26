/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:54:49 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 13:55:10 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
/*
 * Respect of the Orthodox Canonical Form
 *
 * Constructor | Destructor | Copied Constructor | Operator
*/

Brain::Brain()
{
	std::cout << "Brain constructor is called" << std::endl;
	this->ideas = new std::string[MAX_IDEAS];
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
	delete[] ideas;
}

Brain::Brain(Brain const& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = copy.ideas;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Assignement operator is called" << std::endl;
	if (this != &other)
		this->ideas = other.ideas;
	return (*this);
}

/*
 * Getter | Setter
*/
std::string*	Brain::get_ideas(void) const
{
	return (this->ideas);
}

void		Brain::set_ideasInBrain(size_t index, std::string idea)
{
	if (index >= 100)
		std::cout << "Can't implement more than 100 ideas into the brain" << std::endl;
	else
		this->ideas[index] = idea;
}
