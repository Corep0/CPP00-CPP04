/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:34:31 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:49:18 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie constructor is called for " << this->name << " Zombie" << std::endl;
}

Zombie::Zombie(): name("Default")
{
	std::cout << "Zombie constructor is called for Default Zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Killing every zombie still kinda alive" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
