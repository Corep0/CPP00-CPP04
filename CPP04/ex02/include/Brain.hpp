/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:54:19 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:16:24 by seruff           ###   ########.fr       */
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
		Brain(const Brain& copy);
		//Operator
		Brain& operator=(const Brain& other);

		// Getter | Setter
		const std::string&	get_ideas(size_t index) const;
		void		set_ideasInBrain(size_t index, const std::string& idea);

	protected:
		std::string	ideas[MAX_IDEAS];
};

#endif // BRAIN_HPP
