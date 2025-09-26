/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:32:43 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 15:45:19 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string yell)
{
	int	j = 0;
	typedef void	(Harl::*Action)() const;
	Action	levels[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == yell)
		{
			j = i;
			while (j < 4)
			{
				(this->*levels[j])();
				j++;
			}
			return ;
		}
	}
	std::cout << "[Hearing something ?? Nah just a bird]" << std::endl;
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

