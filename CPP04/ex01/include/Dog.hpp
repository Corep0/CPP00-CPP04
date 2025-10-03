/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:25:35 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:08:25 by seruff           ###   ########.fr       */
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
		~Dog();
		Dog(const Dog& copy);

		// Operator
		Dog& operator=(const Dog& other);
		// Getter | Setter
		const std::string&	get_idea(std::size_t ind) const;
		void	set_idea(std::size_t ind, const std::string& idea);
		// Member Function
		void	makeSound(void) const;
	private:
		Brain* brain;
};

#endif // DOG_HPP
