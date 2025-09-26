/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 10:06:05 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 10:41:52 by seruff           ###   ########.fr       */
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
		WrongCat(WrongCat const& copy);	

		WrongCat& operator=(const WrongCat other);
};

#endif // WRONGCAT_HPP
