/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:33:08 by seruff            #+#    #+#             */
/*   Updated: 2025/09/26 15:40:34 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class	AMateria
{
	protected:
		Ice*	ice;
		Cure*	cure;

	public:
		AMateria(std::string const & type);

		std::string	const & getType() const; // Return material type
		virtual	AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

class	Ice
{
};

class Cure
{

};

class	ICharacter
{
	public:
		ICharacter();
		virtual	~ICharacter();
		ICharacter(const ICharacter& copy);

		ICharacter& operator=(ICharacter const other);
		virtual std::string const & getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource();
		virtual void	learnMateria(AMateria*) = 0;
		virtual	AMateria*	createMateria(std::string const & type) = 0;
}


#endif	//ICHARACTER_HPP
