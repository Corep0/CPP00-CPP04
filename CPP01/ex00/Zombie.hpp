/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:32:42 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 08:05:37 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Zombie
{
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce(void);
	private:
		std::string	name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif // ZOMBIE_HPP
