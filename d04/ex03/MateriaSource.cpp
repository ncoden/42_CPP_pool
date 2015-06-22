/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 13:53:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:47:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_materia_count = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{}

MateriaSource			&MateriaSource::operator=(MateriaSource const &rhs)
{
	int				i;
	AMateria		*cpy;

	if (this != &rhs)
	{
		i = 0;
		while (i < this->_materia_count)
		{
			cpy = this->_materias[i]->clone();
			delete this->_materias[i];
			this->_materias[i] = cpy;
			i++;
		}
	}
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_materia_count < 4)
	{
		this->_materias[this->_materia_count] = materia;
		this->_materia_count++;
	}
}

AMateria			*MateriaSource::createMateria(std::string const &type)
{
	int				i;

	i = 0;
	while (i < this->_materia_count)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
		i++;
	}
	return (NULL);
}
