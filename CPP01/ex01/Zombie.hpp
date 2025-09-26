/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:17:09 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 08:53:38 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <string>
# include <iostream>

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string name;
};

Zombie	*zombieHorde(int n, std::string name);
#endif // ZOMBIE_HPP
