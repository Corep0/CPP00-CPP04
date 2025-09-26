/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:33:39 by seruff            #+#    #+#             */
/*   Updated: 2025/09/16 13:33:40 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(std::string line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] >= 'a' && line[i] <= 'z')
		{
			line[i] -= 32;
			std::cout << line[i];
		}
		else
			std::cout << line[i];
		i++;
	}
	std::cout << " ";
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (1);
	}
	while (av[i])
		megaphone(av[i++]);
	return (0);
}
