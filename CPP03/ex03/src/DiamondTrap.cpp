/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:57:05 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 14:27:57 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor | Destructor 
DiamondTrap::DiamondTrap(void): FragTrap(), ScavTrap(), _name("Default")
{
	ClapTrap::name = "Default_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "Constructor DiamondTrip is called for Default" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name), _name(name)
{
	ClapTrap::name = name + "_clap_name";
	std::cout << "Constructor DiamondTrip is called for "
	       << name << std::endl;
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "Copied Constructor is done" << std::endl;	
}

// Operator
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap other)
{
	std::cout << "Assignement Operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return (*this);
}

// Member Functions
void	DiamondTrap::whoAmI(void)
{
	if (hit_points <= 0 || energy_points <= 0)
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
