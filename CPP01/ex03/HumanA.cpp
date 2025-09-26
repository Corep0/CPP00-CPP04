/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:15:21 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 11:39:56 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)  
{};

void	HumanA::attack(void) const
{
	std::cout << name << " with their "
		<< weapon.getType() << std::endl;
}
