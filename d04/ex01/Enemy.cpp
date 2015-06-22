/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:18:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type):
	_type(type)
{
	this->_hp = hp;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void)
{}

Enemy				&Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
	}
	return (*this);
}

void				Enemy::takeDamage(int damage)
{
	if (this->_hp > 0)
		this->_hp -= damage;
}

std::string	const	&Enemy::getType(void) const { return (this->_type); }
int					Enemy::getHP(void) const { return (this->_hp); }
