/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:59:31 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 17:57:56 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const char *name):
	name(name) {}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout << name
				<< " attacks with his "
				<< _weapon->name
				<< std::endl;
	}
}
