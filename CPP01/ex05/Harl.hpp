/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:44:19 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 15:20:15 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string.h>

class	Harl
{
	public:
		void	complain(std::string level);
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};


#endif //HARL_HPP
