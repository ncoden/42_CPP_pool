/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:33:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):
	ClapTrap(name, "NINJA-TP", 60, 120, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "Hello..., I am" << _name
		<< ", Do you see me ? No you don't ! We're fucking the BorderLand univers !!!"
		<< std:: endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src):
	ClapTrap(src._name, "NINJA-TP", 60, 120, 60, 5, 0)
{
	std::cout << "Hello..., I am" << _name
		<< ", Do you see me ? No you don't ! We're fucking the BorderLand univers !!!"
		<< std:: endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Oh, NinjaTrap is DEAD !" << std::endl;
}

NinjaTrap		&NinjaTrap::operator=(NinjaTrap const	&rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void			NinjaTrap::ninjaShoebox(FragTrap &target) const
{
	std::cout << _name << " utilise Attaque Furtive sur FragTrap. FragTrap est distrait, c'est super efficace !" << std::endl;
	target.takeDamage(rand() % 50);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &target) const
{
	std::cout << _name << " utilise Attaque Furtive sur ScavTrap. ScavTrap est un ROBOT, ce n'est pas très efficace." << std::endl;
	target.takeDamage(rand() % 10);
}
