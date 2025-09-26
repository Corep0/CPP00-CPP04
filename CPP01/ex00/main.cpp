/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:32:51 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:46:49 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
//Stack Part
	std::cout << "STACK part" << std::endl;
	Zombie	zomb1("StanHeap");
	Zombie	zomb2("JackHeap");
	Zombie	zomb3;

	zomb1.announce();
	zomb2.announce();
	zomb3.announce();
	randomChump("JoyeStack");
	randomChump("OlgaStack");

//Heap Part
	std::cout << "HEAP part" << std::endl;
	Zombie	*heapster;

	heapster = newZombie("JoesHEAPey");
	heapster->announce();
	delete(heapster);
	
	return (0);
}
