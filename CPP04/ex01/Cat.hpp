/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:29:51 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 14:03:35 by seruff           ###   ########.fr       */
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
		virtual	~Cat();
		Cat(Cat const& copy);

		// Operator
		Cat& operator=(const Cat other);
	private:
		Brain*	_brain;
};

#endif // CAT_HPP
