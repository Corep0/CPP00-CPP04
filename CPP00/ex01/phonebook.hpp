/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:04:20 by seruff            #+#    #+#             */
/*   Updated: 2025/09/17 08:38:12 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

/* 
 * <iostream> -> cout & cin
 * <string> use of getline()
 * <iomanip> use of std::stw()
*/
# include <iostream>
# include <string>
# include <iomanip>

/*		Class		*/
/*
 * Contact class that hold every informations
 * concerning each contacts present in the PhoneBook.
*/
class	Contact
{
	public:
		int	not_filled();
		void	add_contact();
		void	print_small(int n);
		void	print_big();
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
};

/*
 * PhoneBook class that hold every 
 * actions contacts should do, such as :
 * 	- Add new contact to the list
 * 	- Search through contacts list
 * 	(Display them, Take input from user, then print it fully)
*/
class	PhoneBook
{
	public:
		PhoneBook();
		void	add_contact();
		void	search_contact();

	private:
		int		count;
		int		next;
		Contact		contacts[8];
};

/*		Function		*/
void		print_detail();
void		print_small(int n);
void		print_big();
std::string	display_column(std::string str);
int		not_filled();

#endif //PHONEBOOK_H
