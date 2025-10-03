/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:11:41 by seruff            #+#    #+#             */
/*   Updated: 2025/10/03 11:19:19 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\033[1m Constructors: \033[0m" << std::endl;
	ClapTrap c1("Clappy");
	DiamondTrap d1("Diamondy");

	std::cout << "\033[1m Methods: \033[0m" << std::endl;
    	c1.attack("Enemy1");
    	c1.takeDamage(3);
    	c1.beRepaired(2);

	std::cout << "\033[1m Inherited attack: \033[0m" << std::endl;
    	d1.attack("Enemy2"); 
    	d1.takeDamage(5);
    	d1.beRepaired(3);
	std::cout << "Scav-guard_mode(): " << std::endl;
    	d1.guardGate();      
	std::cout << "Frag-HighFive(): " << std::endl;
    	d1.highFivesGuys();   
	std::cout << "Diamond-WhoAmI(): " << std::endl;
    	d1.whoAmI();           

	std::cout << "\033[1m Copy & operator: \033[0m" << std::endl;
    	DiamondTrap d2 = d1;   
   	DiamondTrap d3("Temp");
   	d3 = d1;            
   	d2.whoAmI();
   	d3.whoAmI();

	std::cout << "\033[1m Edge Case: \033[0m" << std::endl;
    	for (int i = 0; i < 12; ++i)
        	d1.attack("Enemy3");
    	d1.beRepaired(5);          
    	d1.highFivesGuys();       

	std::cout << "\033[1m Inheritance: \033[0m" << std::endl;
    	ClapTrap *ptr = new DiamondTrap("PolyDiamond");
    	ptr->attack("PolyEnemy"); 
	delete ptr;	
	return (0);
}
