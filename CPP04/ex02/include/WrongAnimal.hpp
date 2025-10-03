/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:29:49 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:14:46 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);

		WrongAnimal& operator=(const WrongAnimal& other);

		void	makeWrongSound(void) const;

		const std::string	getType(void) const;
		void		setType(std::string type);
	protected:
		std::string	type;
};

# endif // WRONGANIMAL_HPP
