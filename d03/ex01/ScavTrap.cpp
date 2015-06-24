/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:25:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "ScavTrap.hpp"

unsigned int const	ScavTrap::_maxHitPoints = 100;
unsigned int const	ScavTrap::_maxEnergyPoints = 50;
unsigned int const	ScavTrap::_armorDamageReduction = 3;

unsigned int const	ScavTrap::meleeAttackDamage = 20;
unsigned int const	ScavTrap::rangedAttackDamage = 15;

int					ScavTrap::_challenge_number = 4;
std::string			ScavTrap::_challenges[] = {
	"Go play echecs",
	"What is the size of the Eiffel Tower",
	"Come beat you if you're a robot",
	"What is the capital of Gwatemalla"
};

ScavTrap::ScavTrap(std::string name): _name(name)
{
	srand(time(NULL));
	this->_hitPoints = _maxHitPoints;
	this->_energyPoints = _maxEnergyPoints;
	this->_level = 1;
	std::cout << "Hello human, I am" << _name
		<< ", Gate keeper, It's a VERY important duty, as I'm not to let ANYONE in through here! Unless, of course, you're here as fresh meat for the recruitment grinder!"
		<< std:: endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "Hello human, I am" << _name
		<< ", Gate keeper, It's a VERY important duty, as I'm not to let ANYONE in through here! Unless, of course, you're here as fresh meat for the recruitment grinder!"
		<< std:: endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const	&rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_level = rhs._level;
	}
	return (*this);
}

void			ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->rangedAttackDamage << "> points of damage !" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const	&target)
{
	std::cout << "ScavTrap <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" << this->meleeAttackDamage
		<< "> points of damage !" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "Just stop already, I'm DEAD !!!!!!!" << std::endl;
	amount -= _armorDamageReduction;
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "ScavTrap <" << _name
		<< "> took " << amount
		<< " damage and now has " << this->_hitPoints
		<< " hitPoints." << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= amount)
	{
		if (this->_hitPoints + amount > 100)
			amount = 100 - this->_hitPoints;
		this->_energyPoints -= amount;
		this->_hitPoints += amount;
		std::cout << "ScavTrap <" << this->_name
			<< "> was repaired for " << amount
			<< " hitPoints and lost the same energy amount, he now has " << this->_hitPoints
			<< " hitPoints and " <<	this->_energyPoints
			<< " energy points" << std::endl;
	}
	else
		std::cout << "I'M GOING TO BE FULL HEALTH !!!!!! Oh shit, out of energy .. Havn't already said that ?" << std::endl;
}

void			ScavTrap::challengeNewcomer(std::string const &target)
{
	int			random;

	random = rand() % _challenge_number;
	std::cout << _challenges[random] << " " << target << std::endl;
}

std::string		&ScavTrap::getName(void)
{
	return (this->_name);
}
