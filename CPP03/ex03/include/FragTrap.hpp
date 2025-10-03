/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:29:45 by seruff            #+#    #+#             */
/*   Updated: 2025/09/24 10:12:53 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		// Constructor | Destructor
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &copy);

		// Operator
		FragTrap& operator=(const FragTrap other);
		
		// Member functions
		void	highFivesGuys(void);
};

#endif //FRAGTRAP_HPP
