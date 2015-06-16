/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:58:37 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 18:21:45 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &weapon):
	_weapon(weapon),
	name(name)
{
	_weapon = weapon;
}
HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void HumanA::attack(void)
{
	std::string		type;

	type = _weapon.getType();
	if (!type.empty())
	{
		std::cout << name
				<< " attacks with his "
				<< _weapon.getType()
				<< std::endl;
	}
}
