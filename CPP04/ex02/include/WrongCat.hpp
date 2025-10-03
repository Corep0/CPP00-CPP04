/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 10:06:05 by seruff            #+#    #+#             */
/*   Updated: 2025/10/02 11:26:48 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public: 
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& copy);	

		WrongCat& operator=(const WrongCat& other);
		void	makeSound(void) const;
};

#endif // WRONGCAT_HPP
