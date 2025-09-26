/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:39 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 09:12:20 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	monf("Monf");
	ScavTrap	john;

	monf.guardGate();
	for (int i = 0; i < 51; i++)
		monf.attack("Joe");
	monf.guardGate();
	john.attack("Claude");
	return (0);
}
