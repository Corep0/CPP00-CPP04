/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:12:55 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 10:04:37 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		// Constructor | Destructor
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const& copy);

		// Operator
		DiamondTrap& operator=(const DiamondTrap other);

		// Member Function
		void	whoAmI();
		void	attack(const std::string& target);
		
	private:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;
};

# endif
