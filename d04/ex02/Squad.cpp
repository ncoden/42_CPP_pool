/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 11:21:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 14:45:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void)
{
	this->_unit_count = 0;
	this->_unit_max = 16;
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	int		i;

	i = 0;
	while (i < this->_unit_count)
	{
		delete this->_units[i];
		i++;
	}
}

Squad				&Squad::operator=(Squad const &rhs)
{
	int				i;
	ISpaceMarine	*cpy;

	if (this != &rhs)
	{
		i = 0;
		while (i < this->_unit_count)
		{
			cpy = this->_units[i]->clone();
			delete this->_units[i];
			this->_units[i] = cpy;
			i++;
		}
		this->_unit_count = rhs._unit_count;
		this->_unit_max = rhs._unit_max;
	}
	return (*this);
}

int					Squad::getCount(void) const
{
	return (this->_unit_count);
}

ISpaceMarine		*Squad::getUnit(int index) const
{
	if (index < this->_unit_count)
		return (this->_units[index]);
	return (NULL);
}

int					Squad::push(ISpaceMarine *unit)
{
	if (this->_unit_count < this->_unit_max)
	{
		this->_units[this->_unit_count] = unit;
		this->_unit_count++;
	}
	return (this->_unit_count);
}
