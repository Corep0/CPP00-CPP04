/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:13:44 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:56:35 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(void)
{
	{
	Weapon	club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	Weapon crab = Weapon("popsicle");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	jim.setWeapon(crab);
	jim.attack();
	}
	return 0;
}
