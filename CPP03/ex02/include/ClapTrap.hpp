/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:46:08 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 13:58:45 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap
{
	public:
		// Constructors|Destructor
		ClapTrap();
		ClapTrap(std::string name);	
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &copy);

		// Operator Assignement
		ClapTrap& operator=(const ClapTrap other);

		// Member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// Getter
		std::string	get_name(void);
		int		get_hit_points(void);
		int		get_energy_points(void);
		int		get_attack_damage(void);

		// Setter
		void	set_hit_points(int val);
		void	set_energy_points(int val);
		void	set_attack_damage(int val);
	protected:
		std::string	name;
		int		hit_points;
		int		energy_points;
		int		attack_damage;
};

#endif // CLAPTRAP_HPP
