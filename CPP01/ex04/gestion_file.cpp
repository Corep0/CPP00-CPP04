/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:28:11 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 13:40:10 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

/*
 * - Check numbers of parameter
 * - Open the file
 * - Check if is open or not (Error)
 * - Getline() from the file
 * - If the line is get print it OTHERWISE (Error)
 * - Check if there is en EOF
 * - Return valid message ortherwise(Error)
 * - Close the file
*/
int	check_validity(char **av)
{
	std::string s;
	std::ifstream file(av[1]);

	if (!file.is_open())
	{
		std::cerr << "Error: Unable to open file" << std::endl;
		return (1);
	}
	if (file.eof())
	{
		std::cerr << "Error: File reading failed" << std::endl;
		return (1);
	}
	file.close();
	return (0);
}
