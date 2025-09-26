/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:02:55 by seruff            #+#    #+#             */
/*   Updated: 2025/09/23 12:13:55 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Monf");
	ClapTrap b;

	a.attack("Ta");
	b.attack("Monf");
	b.takeDamage(71);
	a.takeDamage(3);
	a.takeDamage(2);
	a.beRepaired(21);
	a.takeDamage(3);
	a.takeDamage(71);
	a.beRepaired(12);
	a.takeDamage(71);

	return (0);
}
