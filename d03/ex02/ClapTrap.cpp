/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:27:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, std::string version, int hp, int en, int mad, int rad, int adr)
{
    std::cout << "Creating ClapTrap" << std::endl;
    this->_hitPoints = hp;
    this->_maxHitPoints = hp;
    this->_energyPoints = en;
    this->_maxEnergyPoints = en;
    this->_level = 1;
    this->_meleeAttackDamage = mad;
    this->_rangedAttackDamage = rad;
    this->_armorDamageReduction = adr;
    this->_name = name;
    this->_version = version;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap		&ClapTrap::operator=(ClapTrap const	&rhs)
{
	if (this != &rhs)
	{
		this->_version = rhs._version;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_armorDamageReduction = rhs._armorDamageReduction;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_level = rhs._level;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
	}
	return (*this);
}

void			ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << _version << "<" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const	&target)
{
	std::cout << _version << "<" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" << this->_meleeAttackDamage
		<< "> points of damage !" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "Just stop already, I'm DEAD !!!!!!!" << std::endl;
	amount -= _armorDamageReduction;
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << _version << "<" << _name
		<< "> took " << amount
		<< " damage and now has " << this->_hitPoints
		<< " hitPoints." << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= amount)
	{
		if (this->_hitPoints + amount > 100)
			amount = 100 - this->_hitPoints;
		this->_energyPoints -= amount;
		this->_hitPoints += amount;
		std::cout << _version << "<" << this->_name
			<< "> was repaired for " << amount
			<< " hitPoints and lost the same energy amount, he now has " << this->_hitPoints
			<< " hitPoints and " <<	this->_energyPoints
			<< " energy points" << std::endl;
	}
	else
		std::cout << "I'M GOING TO BE FULL HEALTH !!!!!! Oh shit, out of energy .." << std::endl;
}

std::string		&ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int	ClapTrap::getMeleeAttackDamage(void)
{
	return (this->_meleeAttackDamage);
}

unsigned int	ClapTrap::getRangedAttackDamage(void)
{
	return (this->_rangedAttackDamage);
}
