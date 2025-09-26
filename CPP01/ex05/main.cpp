/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:43:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 11:58:50 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Carl;

	std::cout << "Carl complain about \"Warning\" " << std::endl;
	Carl.complain("WARNING");
	std::cout << "\nCarl complain about \"DEBUG\" " << std::endl;
	Carl.complain("DEBUG");
	std::cout << "\nCarl complain about \"ERROR\" " << std::endl;
	Carl.complain("ERROR");
	std::cout << "\nCarl complain about \"INFO\" " << std::endl;
	Carl.complain("INFO");
	std::cout << "\nCarl complain about \"IDONTKNOW\" " << std::endl;
	Carl.complain("IDONTKNOW");
	return (0);
}
