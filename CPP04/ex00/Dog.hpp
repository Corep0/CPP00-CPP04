/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:25:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 11:42:33 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		// Constructor | Destructor
		Dog();
		~Dog();
		Dog(Dog const& copy);

		// Operator
		Dog& operator=(const Dog other);
};

#endif // DOG_HPP
