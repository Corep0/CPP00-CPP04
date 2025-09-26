/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:40:47 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:40:55 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	book;

	print_detail();
	while (1)
	{
		getline(std::cin, command);
		std::cout << command << std::endl;
		if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contact();
		else if (command == "EXIT")
			break ;
		else
			continue ;
		print_detail();
	}
	std::cout << "Leaving the program phonebook" << std::endl;
	return (0);
}
