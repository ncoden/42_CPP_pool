/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 09:26:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void):
	AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src):
	AWeapon("Plasma Rifle", 5, 21)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{}

PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const	&rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return (*this);
}

void					PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
