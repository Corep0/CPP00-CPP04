/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 14:05:01 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << i->getType() << std::endl;
	i->makeSound();

	delete	i;
	delete	j;
	
	std::cout << "\nDestruction of Animals | Creation of DOG and CAT\n" << std::endl;

	Dog* d = new Dog();
	Cat* c = new Cat();

	delete	d;
	delete	c;
	return (0);
}
