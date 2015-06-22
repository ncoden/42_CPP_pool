/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 14:16:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:54:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Character.hpp"

Character::Character(std::string const &name):
	_name(name)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		this->_materias[i] = NULL;
		i++;
	}
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{}

Character			&Character::operator=(Character const &rhs)
{
	int				i;
	AMateria		*cpy;

	if (this != &rhs)
	{
		i = 0;
		while (i < 4)
		{
			if (this->_materias[i])
			{
				cpy = this->_materias[i]->clone();
				delete this->_materias[i];
				this->_materias[i] = cpy;
			}
			i++;
		}
		this->_name = rhs._name;
	}
	return (*this);
}

void				Character::equip(AMateria *materia)
{
	int				i;

	i = 0;
	while (i < 4 && this->_materias[i])
		i++;
	if (i < 4)
		this->_materias[i] = materia;
}

void				Character::unequip(int idx)
{
	if (idx < 4)
		this->_materias[idx] = NULL;
}

void				Character::use(int idx, ICharacter const &target)
{
	if (idx < 4
		&& this->_materias[idx] != NULL)
		this->_materias[idx]->use(target);
}

std::string const	&Character::getName() const { return (this->_name); }
