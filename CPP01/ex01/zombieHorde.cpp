/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:18:16 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:51:44 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int	i;
	Zombie	*horde;

	if (n <= 0)
		return (NULL);
	horde = new Zombie[n];
	i = 0;
	while (i < n)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}
