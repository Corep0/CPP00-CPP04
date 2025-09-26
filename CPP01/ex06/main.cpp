/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:25:19 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 12:02:53 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	display_info(void)
{
	std::cout << "The first argument need to be : \n" 
		<< "\tWARNING" << "\n\tDEBUG" << "\n\tERROR" << "\n\tINFO"
	       << std::endl;	
}

int	main(int ac, char **av)
{
	Harl	Carl;

	if (ac != 2 || av[1][0] == '\0')
	{
		std::cout << "Need only one argument" << std::endl;
		return (display_info(), 1);
	}
	Carl.complain(av[1]);
	return (0);
}
