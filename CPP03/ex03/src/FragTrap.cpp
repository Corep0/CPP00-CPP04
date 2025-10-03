/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:36:05 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 14:25:22 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors | Destructor
FragTrap::FragTrap(): ClapTrap("Default")
{
	std::cout << "Constructor FragTrap called for Default" << std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Fragtrap called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor FragTrap called for " << FragTrap::get_name()
	       	<< std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::FragTrap(FragTrap const& copy): ClapTrap(copy)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
}

// Operator
FragTrap&	FragTrap::operator=(const FragTrap other)
{
	std::cout << "Assignement operator for FragTrap called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}	

// Member Function
		// Might need to add attack()
void	FragTrap::highFivesGuys(void)
{
	if (get_hit_points() <= 0 || get_energy_points() <= 0)
		std::cout << "Cannot High Five cause he is dead already" << std::endl;
	else
		std::cout << "High-fives requested and GIVEN" << std::endl;
}
