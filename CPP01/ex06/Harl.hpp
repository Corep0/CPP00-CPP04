/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:25:45 by seruff            #+#    #+#             */
/*   Updated: 2025/09/18 15:40:07 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl
{
	public:
		void	complain(std::string yell);
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif //HARL_HPP
