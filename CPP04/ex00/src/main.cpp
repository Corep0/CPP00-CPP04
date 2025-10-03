/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:21:06 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 10:34:35 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//Normal test of Animal class inherit by CAT/DOG
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	//An other test of Animal(but a wrong one) inherited by a WrongCAT/and a DOG..
	const WrongAnimal* wronga = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	
	std::cout << wronga->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;

	wronga->makeWrongSound(); //will output the cat sound!
	wrongcat->makeWrongSound();

	delete wronga;
	delete wrongcat;
	return (0);
}
