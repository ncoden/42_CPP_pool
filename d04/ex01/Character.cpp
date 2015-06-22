/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 10:10:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 10:49:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Character.hpp"

Character::Character(std::string const &name):
	_name(name)
{
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::Character(Character const &src):
	_name(src._name)
{
	*this = src;
}

Character::~Character(void)
{}

Character			&Character::operator=(Character const	&rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

std::ostream		&operator<<(std::ostream &os, Character const &rhs)
{
	os << rhs.getName()
		<< " has " << rhs.getAP()
		<< " AP and ";
	if (rhs.getWeapon())
		os << "wields a " << rhs.getWeapon()->getName();
	else
		os << "is unarmed";
	os << std::endl;
	return (os);
}

void				Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	int				apcost;

	if (this->_weapon)
	{
		apcost = this->_weapon->getAPCost();
		if (this->_ap > apcost)
		{
			std::cout << this->_name
				<< " attacks " << enemy->getType()
				<< " with a " << this->_weapon->getName()
				<< std::endl;
			this->_weapon->attack();

			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;

			this->_ap -= apcost;
		}
	}
}

std::string	const	&Character::getName(void) const { return (this->_name); }
int					Character::getAP(void) const { return (this->_ap); }
AWeapon	const		*Character::getWeapon(void) const { return (this->_weapon); }
