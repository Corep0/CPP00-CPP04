/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:16:02 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 09:15:23 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
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
