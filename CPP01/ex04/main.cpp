/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:57:38 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 13:36:57 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage : ./sed_is_for_losers <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	if (check_validity(av) == 1)
		return (1);
	std::string	line;

	std::ifstream	filein(av[1]);
	std::ofstream	filecopy("sedded_file.txt");
	if (filein && filecopy)
	{
		while (getline(filein, line))
		{
			if (line == av[2])
				line = av[3];
			filecopy << line << "\n";
		}
		std::cout << "Copy Finished" << std::endl;
	}
	else
		std::cerr << "Cannot read file";
	filein.close();
	filecopy.close();
	return (0);
}
