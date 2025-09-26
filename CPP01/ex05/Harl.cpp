/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:45:05 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 15:33:47 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	typedef void (Harl::*Action)() const;
        Action	levels[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == level)
		{
			(this->*levels[i])();
			return ;
		}
	}
	std::cout << "Error : Harl didn't complain.. What a shame" << std::endl;
	
}
void	Harl::debug(void) const
{
	std::cout << "[DEBUG] "
		<< "I love having chocolate cream on french fries" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "[INFO] " 
		<< "I don't understand why people aren't used to travel on their hand"
		<< " Instead of their foot.. so boring" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "[WARNING] "
		<< "I think I deserve some bacon for free. I've been"
		<< "coming for years, whereas you started working here yesterday" << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "[ERROR] " 
		<< "This is unacceptable ! BLABLABLABLA" << std::endl;
}
