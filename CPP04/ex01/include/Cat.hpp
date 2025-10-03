/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:29:51 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:13:09 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	public:
		// Constructor | Destructor
		Cat();
		~Cat();
		Cat(const Cat& copy);

		// Operator
		Cat& operator=(const Cat& other);
		// Getter | Setter
		const std::string&	get_idea(std::size_t ind) const;
		void	set_idea(std::size_t ind, const std::string& idea);
		// Member function
		void	makeSound(void) const;
	private:
		Brain* brain;
};

#endif // CAT_HPP
