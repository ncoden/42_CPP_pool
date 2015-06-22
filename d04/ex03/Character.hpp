/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 14:16:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:35:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string			_name;
		AMateria			*_materias[4];

	public:
		Character(std::string const &name);
		~Character(void);
		Character(Character const &src);

		Character			&operator=(Character const &rhs);

		void				equip(AMateria *materia);
		void				unequip(int idx);
		void				use(int idx, ICharacter const &target);

		std::string const	&getName(void) const;
};

#endif
