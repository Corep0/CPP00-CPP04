/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_print.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:15:06 by seruff            #+#    #+#             */
/*   Updated: 2025/09/17 09:06:44 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*	Display Contact Information	*/
void	Contact::print_small(int n)
{
	std::cout << "Contact " << n << std::endl;
	std::cout << "|" << std::setw(10) << n << "|"
		<< display_column(firstname) << "|"
		<< display_column(lastname) << "|"
		<< display_column(nickname) << "|"
		<< std::endl;
}

void	Contact::print_big()
{
	std::cout << "Contacts in the Phonebook " << std::endl;
	std::cout << "First Name :" << firstname << std::endl;
	std::cout << "Last Name :" << lastname << std::endl;
	std::cout << "Nick Name :" << nickname << std::endl;
	std::cout << "Phone Number :" << phonenumber << std::endl;
	std::cout << "Darkest Secret :" << darkestsecret << std::endl;
}

/*	Utils	*/
void	print_detail()
{
	std::cout << "\t\tPHONEBOOK\t\t" << std::endl;
	std::cout << "\tADD : to add a new contact in the phonebook" << std::endl;
	std::cout << "\tSEARCH : to search a contact into the phonebook" << std::endl;
	std::cout << "\tEXIT : to quit the program" << std::endl;
	std::cout << "Type a command : " << std::endl;
}

std::string	display_column(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (std::string(10 - str.length(), ' ') + str);
}

int	Contact::not_filled()
{
	if (firstname.empty())
		return (1);
	return (0);
}
