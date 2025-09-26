/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:17:49 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 11:35:38 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	public:
		Weapon(const std::string& type);
		const std::string&	getType() const;
		void	setType(const std::string& newType);
	private:
		std::string type;
};

#endif //WEAPON_HPP
