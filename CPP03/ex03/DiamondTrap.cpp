/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:57:05 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 10:07:19 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor | Destructor 
DiamondTrap::DiamondTrap(void)
{
	std::cout << "Constructor DiamondTrip is called for Default" << std::endl;
	this->_name = "Default_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name)
{
	std::cout << "Constructor DiamondTrip is called for "
	       << name << std::endl;
	this->_name = name;
	ClapTrap::set_name(name + "_clap_name");
	this->_hit_points = FragTrap::get_hit_points();
	this->_energy_points = ScavTrap::get_energy_points();
	this->_attack_damage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy): FragTrap(copy), ScavTrap(copy)
{
	std::cout << "Copied Constructor is done" << std::endl;	
}

// Operator
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap other)
{
	std::cout << "Assignement Operator called" << std::endl;
	FragTrap::operator=(other);
	return (*this);
}

// Member Functions
void	DiamondTrap::whoAmI(void)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "The entity is already dead, can't do any action" << std::endl;
	else
	{
		std::cout << "The name of DiamondTrap is : " << this->_name << std::endl;
		std::cout << "The name of ClapTrap is : " << ClapTrap::get_name() << std::endl;
	}
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
