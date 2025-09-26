/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:36:31 by seruff            #+#    #+#             */
/*   Updated: 2025/09/17 11:36:33 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp" 

void	PhoneBook::search_contact()
{
	int	i;
	int	index;

	if (count == 0)
	{
		std::cout << "Nothing to display, please create at least 1 contact" << std::endl;
		return ;
	}
	i = 0;
	std::cout << "  Index   |First Name|Last Name |Nick Name |" << std::endl;
	while (i < count)
	{
		contacts[i].print_small(i);
		i++;
	}
	std::cout << "Please choose a contact by choosing his index" << std::endl;
	std::cin >> index;
	if (index < 0 || index > count)
		std::cout << "Please choose a contact that exist" << std::endl;
	else
		contacts[index].print_big();
}

/* Adding Contact into the Phoneboook
 * PhoneBook:add_contact() loop throught contacts
 * to give access to class:Contact the ID he need to fill
 * Contact::add_contact():
 * 	- ask input from user to fill field of informations
 * 	- fill fields
 * 	- If not every field are filled, clear them all
 * 	and display a specific message
*/
void	PhoneBook::add_contact()
{
	contacts[next].add_contact();
	if (!contacts[next].not_filled() && count < 8)
		count++;
	else
		return ;
	next = (next + 1) % 8;
	std::cout << "Contact added" << std::endl;
}

void	Contact::add_contact()
{
	std::cout << "Fill field to create a contact" << std::endl;
	std::cout << "First Name : " << std::endl;
	getline(std::cin, firstname);
	std::cout << "Last Name : " << std::endl;
	getline(std::cin, lastname);
	std::cout << "Nickname : " << std::endl;
	getline(std::cin, nickname);
	std::cout << "Phone Number : " << std::endl;
	getline(std::cin, phonenumber);
	std::cout << "Darkest Secret : " << std::endl;
	getline(std::cin, darkestsecret);
	if (firstname.empty() || lastname.empty()
			|| nickname.empty()
			|| phonenumber.empty()
			|| darkestsecret.empty())
	{
		std::cout << "Couldn't add the contact" << "\n";
		std::cout << "Every field should be filled" << "\n";
		firstname.clear();
		lastname.clear();
		nickname.clear();
		phonenumber.clear();
		darkestsecret.clear();
	}
}

/*
 * Used as initializer
 * Called when the constructor 'PhoneBook' is created
 * 'PhoneBook::PhoneBook()' -> Definition of the constructor of the class
 * ': count(0), next(0)' -> Initializer list
*/

PhoneBook::PhoneBook() : count(0), next(0){}

/*
 * Loop as long as the user didn't send 'EXIT'
 * Invite the user to type ADD/SEARCH to fill or search
 * throught the PhoneBook a contact
 * It breaks when EXIT is send from the USER
*/
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
