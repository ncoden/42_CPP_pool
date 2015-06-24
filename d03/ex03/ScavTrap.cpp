/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:33:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "ScavTrap.hpp"

int					ScavTrap::_challenge_number = 4;
std::string			ScavTrap::_challenges[] = {
	"Go play echecs",
	"What is the size of the Eiffel Tower",
	"Come beat you if you're a robot",
	"What is the capital of Gwatemalla"
};

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name, "SCAV-TP", 100, 50, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "Hello human, I am" << _name
		<< ", Gate keeper, It's a VERY important duty, as I'm not to let ANYONE in through here! Unless, of course, you're here as fresh meat for the recruitment grinder!"
		<< std:: endl;
}

ScavTrap::ScavTrap(ScavTrap const &src):
	ClapTrap(src._name, "SCAV-TP", 100, 50, 20, 15, 3)
{
	std::cout << "Hello human, I am" << _name
		<< ", Gate keeper, It's a VERY important duty, as I'm not to let ANYONE in through here! Unless, of course, you're here as fresh meat for the recruitment grinder!"
		<< std:: endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh, ScavTrap is DEAD !" << std::endl;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const	&rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void			ScavTrap::challengeNewcomer(std::string const &target)
{
	int			random;

	random = rand() % _challenge_number;
	std::cout << _challenges[random] << " " << target << std::endl;
}
