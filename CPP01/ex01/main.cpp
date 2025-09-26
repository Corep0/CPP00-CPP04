/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:13:50 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:52:15 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*hord;
	int	n;

	n = 2;
	hord = zombieHorde(n, "JackHord");
	if (hord == NULL)
	{
		std::cout << "Sorry no Hord today.. Use a better number of Zombie" 
			<< std::endl;
		return (1);
	}
	for (int i = 0; i < n; i++)
	{
		hord[i].announce();
		std::cout << std::endl;
	}
	delete[] hord;
	return (0);
}
