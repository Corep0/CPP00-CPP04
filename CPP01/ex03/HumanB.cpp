/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:16:16 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 12:42:11 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

void	HumanB::setWeapon(Weapon &weapon_kind)
{
	weapon = &weapon_kind;
}

void	HumanB::attack(void) const
{
	if (weapon)
		std::cout << name << " attacks with their "
			<< weapon->getType() << std::endl;
}
