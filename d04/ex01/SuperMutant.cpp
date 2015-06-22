/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:18:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void):
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src):
	Enemy(170, "Super Mutant")
{
	*this = src;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;

}

SuperMutant				&SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return (*this);
}

void					SuperMutant::takeDamage(int damage)
{
	if (this->_hp > 0 && damage > 3)
		this->_hp -= damage - 3;
}
