/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:51:26 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 08:12:31 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	a("Titus");

	a.highFivesGuys();
	for (int i = 0; i < 101; i++)
		a.attack("SorryJoe");
	a.highFivesGuys();
	return (0);
}
