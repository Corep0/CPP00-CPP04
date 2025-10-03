/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:02:55 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 09:22:50 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\t\033[1m Canonical Form : \033[0m" << std::endl;
	std::cout << "\033[1m Constructor | Destructor | Clone(copy) | =operator (copy attribute) : \033[0m\n" << std::endl;
	std::cout << "\033[1mConstructor with params :\033[0m " << std::endl;
	ClapTrap	a("Monf");
	std::cout << "\033[1mConstructor without params : \033[0m" << std::endl;
	ClapTrap	b;

	std::cout << "\n\033[1mAttack() :\033[0m \n" << std::endl;
	a.attack("Ta");
	b.attack("Monf");
	a.attack("");

	std::cout << "\n\033[1beRepaired() : \033[0m\n" << std::endl;
	a.beRepaired(21);
	b.beRepaired(1);
	a.beRepaired(0);

	std::cout << "\n\033[1mtakeDamage() : \033[0m" << std::endl;
	b.takeDamage(0);
	a.takeDamage(3);
	a.takeDamage(2);
	a.takeDamage(3);
	a.takeDamage(171);
	std::cout << "\n\033[1mCan't take anymore damage (test) : \033[0m" << std::endl;
	a.takeDamage(71);
	
	return (0);
}
