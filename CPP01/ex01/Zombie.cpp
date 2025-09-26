/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:17:40 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:50:33 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie constructor" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie: " << this->name << "created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Kill them all(Destructor of zombie)" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
