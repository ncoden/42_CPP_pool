/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:57:50 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 18:23:29 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const char *name):
	name(name)
{
}
Weapon::~Weapon(void) {}

std::string		Weapon::getType(void)
{
	return (this->_type);
}

void			Weapon::setType(const char *type)
{
	this->_type = std::string(type);
}
