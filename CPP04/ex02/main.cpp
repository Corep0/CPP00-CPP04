/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:38:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 15:20:36 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	//Remove the /* */ at line 21 & 26 if you want to check 
	//if the class Animal is instantiable
	//If it is then without these comment the compilator won't compile
/*	
 	Animal	a;
	Animal* b = new Animal();
	b->makeSound();
	delete	b;
*/
	Animal* c = new Dog();

	c->makeSound();
	delete	c;

	return (0);
}
