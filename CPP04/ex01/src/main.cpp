/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:35 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 14:32:02 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "Test from the subject " << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n\tOther tests\n" << std::endl;
	const Animal* a = new Animal();
	const Animal* b = new Dog();
	const Animal* c = new Cat();
	std::cout << "Type of dog: " << b->getType() << std::endl;
	std::cout << "Type of cat: " << c->getType() << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();
	delete a;
	delete b;
	delete c;

	std::cout << "\n\t Test with copy \n" << std::endl;
	Dog	main;
	main.set_idea(0, "Bones ? ");
	Dog	copy(main);
	copy.set_idea(0, "Bark at neighbour");
	std::cout << "Main first idea : " << main.get_idea(0) <<std::endl;
	std::cout << "Copy_main first idea : " << copy.get_idea(0) <<std::endl;

	std::cout << "\n\t Test with assignement oper\n" << std::endl;
	Cat	cmain;
	cmain.set_idea(0, "Eat Tuna");
	Cat	copy_cmain;
	copy_cmain = cmain;
	copy_cmain.set_idea(0, "Sleep");
	std::cout << "Main first idea : " << cmain.get_idea(0) <<std::endl;
	std::cout << "Copy_main first idea : " << copy_cmain.get_idea(0) <<std::endl;

	std::cout << "\n\t Last test \n" << std::endl;
	Cat	last;
	Cat	tmp = last;	

	return (0);
}
