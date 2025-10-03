/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:51:26 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 11:01:47 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\t\033[1m Constructor test: \033[0m" << std::endl;
    	ClapTrap c1("Clappy");
    	FragTrap f1("Scavvy");

	std::cout << "\t\033[1m Method test: \033[0m" << std::endl;
    	c1.attack("Enemy1");
    	c1.takeDamage(3);
    	c1.beRepaired(2);

    	f1.attack("Enemy2"); 
    	f1.takeDamage(5);     
    	f1.beRepaired(3); 
	
	std::cout << "\t\033[1m Copy & operator= test: \033[0m" << std::endl;
    	FragTrap f2 = f1;
    	FragTrap f3("Temp");
   	f3 = f1;

	std::cout << "\t\033[1m Edge case : \033[0m" << std::endl;
    	for (int i = 0; i < 12; ++i)
        f1.attack("Enemy3"); 
    	f1.beRepaired(5);    
	f1.highFivesGuys();
	
	std::cout << "\t\033[1m Death case: \033[0m" << std::endl;
    	for (int i = 0; i < 12; ++i)
        f1.takeDamage(9); 
    	f1.beRepaired(5);    
	f1.highFivesGuys();

	std::cout << "\t\033[1m Inheritance: \033[0m" << std::endl;
    	ClapTrap *ptr = new FragTrap("Poly");
	std::cout << "Should called Claptrap.attack()" << std::endl;
   	ptr->attack("PolyEnemy");
	delete ptr; 
	
	std::cout << "\t\033[1m Destructor: \033[0m" << std::endl;

	return (0);

}
