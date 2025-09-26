/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:25:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 15:17:58 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	public:
		// Constructor | Destructor
		Dog();
		virtual	~Dog();
		Dog(Dog const& copy);

		// Operator
		Dog& operator=(const Dog& other);

		// Member function (not in instatiable mode)
		void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif // DOG_HPP
