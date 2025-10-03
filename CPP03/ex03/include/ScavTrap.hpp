/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:16:02 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 10:13:44 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
// Use of virtual instead of protected value
// Virtual is more modern and not need to change everything from the base 'ClapTrap'
class	ScavTrap: public virtual ClapTrap
{
	public:
		// Constructors | Destructors
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);

		// Operator
		ScavTrap& operator=(const ScavTrap other);

		// Member Functions
		void	attack(const std::string& target);
		void	guardGate();

		// Getter | Setter
		bool	get_guardmode();
		void	set_guardmode(bool val);

	private:
		bool		guard_mode;

};

#endif	//SCAVTRAP_HPP
