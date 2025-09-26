/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:54:19 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 13:33:39 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# define MAX_IDEAS	100
# include <iostream>

class	Brain
{
	public:
		// Constructor | Destructor
		Brain();
		virtual ~Brain();
		Brain(Brain const& copy);
		//Operator
		Brain& operator=(const Brain& other);

		// Getter | Setter
		std::string*	get_ideas(void) const;
		void		set_ideasInBrain(size_t index, std::string idea);

	protected:
		std::string*	ideas;
};

#endif // BRAIN_HPP
