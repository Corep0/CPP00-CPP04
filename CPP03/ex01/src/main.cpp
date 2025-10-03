/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:39 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 10:59:08 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\t\033[1m Constructor test: \033[0m" << std::endl;
    	ClapTrap c1("Clappy");
    	ScavTrap s1("Scavvy");

	std::cout << "\t\033[1m Method test: \033[0m" << std::endl;
    	c1.attack("Enemy1");
    	c1.takeDamage(3);
    	c1.beRepaired(2);

    	s1.attack("Enemy2"); 
    	s1.takeDamage(5);     
    	s1.beRepaired(3); 
    	s1.guardGate();
	s1.set_guardmode(true);
    	s1.guardGate();
	
	std::cout << "\t\033[1m Copy & operator= test: \033[0m" << std::endl;
    	ScavTrap s2 = s1;
    	ScavTrap s3("Temp");
   	s3 = s1;
	s2.guardGate();
   	s3.guardGate();

	std::cout << "\t\033[1m Edge case test: \033[0m" << std::endl;
    	for (int i = 0; i < 12; ++i)
        s1.attack("Enemy3"); 
    	s1.beRepaired(5);    

	std::cout << "\t\033[1m Inheritance: \033[0m" << std::endl;
    	ClapTrap *ptr = new ScavTrap("Poly");
   	ptr->attack("PolyEnemy"); // should call ClapTrap::attack
    	delete ptr;               // check proper destructor chaining
	
	std::cout << "\t\033[1m Destructor: \033[0m" << std::endl;

	return (0);
}
