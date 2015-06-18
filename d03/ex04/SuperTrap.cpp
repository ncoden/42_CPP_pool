/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 21:13:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
// 100, 120, 60, 20, 5
SuperTrap::SuperTrap(std::string name):
	ClapTrap(name, "SUPER-TP", 100, 120, 60, 20, 5),
	FragTrap(name),
	NinjaTrap(name)
{
	srand(time(NULL));
	std::cout << "I'm Batman" << std:: endl;
}

SuperTrap::SuperTrap(SuperTrap const &src):
	ClapTrap(src),
	FragTrap(src),
	NinjaTrap(src)
{
	std::cout << "I'm Batman" << std:: endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Oh, SuperTrap is DEAD !" << std::endl;
}

SuperTrap		&SuperTrap::operator=(SuperTrap const	&rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}
