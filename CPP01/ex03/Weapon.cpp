/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:17:39 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 11:39:07 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{};

const std::string& Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(const std::string& newType)
{
	type = newType;
}
