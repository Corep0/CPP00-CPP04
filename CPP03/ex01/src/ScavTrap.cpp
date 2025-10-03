/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:17:04 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 13:50:41 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors | Destructor
ScavTrap::ScavTrap() : ClapTrap()
{
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
	this->guard_mode = false;
	std::cout << "ScavTrap Constructor called for Default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
	std::cout << "ScavTrap Constructor is called for "
	       << get_name() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap is called for "
	       << get_name() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "Clone is build from ClapTrap assignement" << std::endl;
	this->guard_mode = copy.guard_mode;
}

// Operator
ScavTrap&	ScavTrap::operator=(const ScavTrap other)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// Member functions

void	ScavTrap::attack(const std::string& target)
{
	if (get_hit_points() <= 0 || get_energy_points() <= 0)
	{
		std::cout << "ScavTrap is out of energy or HP" << std::endl;
		return ;
	}
	set_energy_points(get_energy_points() - 1);
	std::cout << "ScavTrap " << get_name() << " attacks " << target
		<< ", causing " << get_attack_damage() << " points of damage!" << std::endl; 
}

void	ScavTrap::guardGate(void)
{
	if (this->guard_mode == true)
		std::cout << "ScavTrap " << get_name() << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << get_name() << " is still in combat mode" << std::endl;
}

// Getter | Setter
bool	ScavTrap::get_guardmode(void)
{
	return (this->guard_mode);
}

void	ScavTrap::set_guardmode(bool val)
{
	this->guard_mode = val;
}
