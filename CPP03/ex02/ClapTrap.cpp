/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:43:08 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 08:44:26 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor | Destructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor of ClapTrap is called (Defaut)" << std::endl;
	this->name = "Default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor of ClapTrap is called (" 
		<< name << ") " << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap is called" << std::endl;
	if (this->hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
	if (this->energy_points <= 0)
		std::cout << "Claptrap " << this->name << " is out of energy" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor is called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
}

// Operator
ClapTrap&	ClapTrap::operator=(const ClapTrap other)
{
	std::cout << "Copy assignement operator is called" << std::endl;
	if (this != &other)
	{
		if (this->name != other.name)
			this->name = other.name;
		if (this->hit_points != other.hit_points)
			this->hit_points = other.hit_points;
		if (this->energy_points != other.energy_points)
			this->energy_points = other.energy_points;
		if (this->attack_damage != other.attack_damage)
			this->attack_damage = other.attack_damage;
	}
	return (*this);
}

// Member Functions
void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "Out of energy or HP, can't do anything.." << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap is already dead.." << std::endl;
		return ;
	}
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name
		<< " have been attacked and loose "
		<< amount << " HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "Out of energy or HP, can't do anything.." << std::endl;
		return ;
	}
	this->energy_points -= 1;
	this->hit_points += amount;
	std::cout << "Claptrap " << this->name << " have been healed and get "
		<< amount << " HP added" << std::endl;
	std::cout << "ClapTrap " << this->name << " remains with " 
		<< this->hit_points << " HP" << std::endl;
}

// Getter | Setter
std::string	ClapTrap::get_name(void)
{
	return (this->name);
}

int	ClapTrap::get_hit_points(void)
{
	return (this->hit_points);
}

int	ClapTrap::get_energy_points(void)
{
	return (this->energy_points);
}

int	ClapTrap::get_attack_damage(void)
{
	return (this->attack_damage);
}

void	ClapTrap::set_hit_points(int val)
{
	this->hit_points = val;
}

void	ClapTrap::set_energy_points(int val)
{
	this->energy_points = val;
}

void	ClapTrap::set_attack_damage(int val)
{
	this->attack_damage = val;
}
