/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:15:35 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 11:37:53 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanA
{
	public:
		HumanA(const std::string& name, Weapon& weapon);
		void attack(void) const;
	private:
		std::string name;
		Weapon &weapon;
};

#endif //HUMANA_HPP
