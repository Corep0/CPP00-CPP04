/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:16:28 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 12:40:11 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanB
{
	public:
		HumanB(const std::string& name);
		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
	private:
		std::string	name;
		Weapon *weapon;
};

#endif
