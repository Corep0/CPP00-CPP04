/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:21:48 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 14:59:47 by seruff           ###   ########.fr       */
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
		virtual void	makeSound() const = 0;
		
		//Getter | Setter
		void	setType(std::string type);
		std::string	getType(void) const;
	
	protected:
		std::string type;
};

#endif // ANIMAL_HPP
