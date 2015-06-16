/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:58:37 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:13 by ncoden           ###   ########.fr       */
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
