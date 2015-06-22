/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 11:21:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:00:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type):
	_type(type)
{
	this->xp_ = 0;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{}

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->xp_ = rhs.xp_;
	}
	return (*this);
}

void				AMateria::use(ICharacter const &character)
{
	(void)character;
}

std::string const	&AMateria::getType() const { return (this->_type); }
unsigned int		AMateria::getXP() const { return (this->xp_); }
