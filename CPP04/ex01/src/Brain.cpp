/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:54:49 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:35:12 by seruff           ###   ########.fr       */
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
	int	i = 0;
	while (i < MAX_IDEAS)
	{
		this->ideas[i] = "Idea";
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" 
		<< std::endl;
	int	i = 0;
	while (i < MAX_IDEAS)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain Assignement operator is called" << std::endl;
	if (this != &other)
	{
		int	i = 0;
		while (i < MAX_IDEAS)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}

/*
 * Getter | Setter
*/
const std::string&	Brain::get_ideas(size_t index) const
{
	static const std::string wrong_idea;
	if (index >= MAX_IDEAS)
		return (wrong_idea);
	return (this->ideas[index]);
}

void		Brain::set_ideasInBrain(size_t index, const std::string& idea)
{
	if (index >= MAX_IDEAS)
	{
		std::cout << "Can't implement more than 100 ideas into the brain" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}
