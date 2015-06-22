/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:19:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(void):
	AWeapon("PowerFist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const &src):
	AWeapon("PowerFist", 8, 50)
{
	*this = src;
}

PowerFist::~PowerFist(void)
{}

PowerFist				&PowerFist::operator=(PowerFist const	&rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return (*this);
}

void					PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
