/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 13:50:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:53:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual void				equip(AMateria *materia) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter const &target) = 0;

		virtual std::string const	&getName(void) const = 0;
};

#endif
