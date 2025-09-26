/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:29:51 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 11:42:30 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		// Constructor | Destructor
		Cat();
		~Cat();
		Cat(Cat const& copy);

		// Operator
		Cat& operator=(const Cat other);
};

#endif // CAT_HPP
