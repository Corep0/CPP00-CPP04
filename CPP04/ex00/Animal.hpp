/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:21:48 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 11:52:45 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
		// Constructor | Destructor
		Animal();
		virtual ~Animal();
		Animal(Animal const& copy);

		// Operator
		Animal& operator=(const Animal& other);
		
		// Member Function
		void	makeSound() const;
		
		//Getter | Setter
		void	setType(std::string type);
		std::string	getType(void) const;
	
	protected:
		std::string type;
};

#endif // ANIMAL_HPP
