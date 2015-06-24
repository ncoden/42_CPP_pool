/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:24:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "FragTrap.hpp"

unsigned int const	FragTrap::_maxHitPoints = 100;
unsigned int const	FragTrap::_maxEnergyPoints = 100;
unsigned int const	FragTrap::_armorDamageReduction = 5;

unsigned int const	FragTrap::meleeAttackDamage = 30;
unsigned int const	FragTrap::rangedAttackDamage = 20;

int						FragTrap::_attack_number = 5;
unsigned int (FragTrap::*FragTrap::_attacks[])(std::string const &target) = {
	&FragTrap::clapInTheBox,
	&FragTrap::laserInferno,
	&FragTrap::torgueFiesta,
	&FragTrap::pirateShipMode,
	&FragTrap::oneShotWonder
};

FragTrap::FragTrap(std::string name): _name(name)
{
	srand(time(NULL));
	this->_hitPoints = _maxHitPoints;
	this->_energyPoints = _maxEnergyPoints;
	this->_level = 1;
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << _name
		<< ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
		<< std:: endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << _name
		<< ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
		<< std:: endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap		&FragTrap::operator=(FragTrap const	&rhs)
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

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->rangedAttackDamage << "> points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const	&target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <" << this->meleeAttackDamage
		<< "> points of damage !" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "Just stop already, I'm DEAD !!!!!!!" << std::endl;
	amount -= _armorDamageReduction;
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "FR4G-TP <" << _name
		<< "> took " << amount
		<< " damage and now has " << this->_hitPoints
		<< " hitPoints." << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= amount)
	{
		if (this->_hitPoints + amount > 100)
			amount = 100 - this->_hitPoints;
		this->_energyPoints -= amount;
		this->_hitPoints += amount;
		std::cout << "FR4G-TP <" << this->_name
			<< "> was repaired for " << amount
			<< " hitPoints and lost the same energy amount, he now has " << this->_hitPoints
			<< " hitPoints and " <<	this->_energyPoints
			<< " energy points" << std::endl;
	}
	else
		std::cout << "I'M GOING TO BE FULL HEALTH !!!!!! Oh shit, out of energy .." << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			random;

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		random = rand() % _attack_number;
		return ((this->*_attacks[random])(target));
	}
	else
		std::cout << "I'm out of fuel for the big random attack !" << std::endl;
	return (0);
}

unsigned int	FragTrap::clapInTheBox(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> use the random attack ClapInTheBox, he hold a bomb and rush like a kamikaze on <" << target
		<< ">" << std::endl;
	return (30);
}

unsigned int	FragTrap::laserInferno(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> use the random attack LaserInferno, he now shoots laser from his eyes <"
		<< target << ">" << std::endl;
	return (50);
}

unsigned int	FragTrap::torgueFiesta(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> use the random attack torgueFiesta, NOW GO BLOW SOME SH*T UP ON <"
		<< target << ">" << std::endl;
	std::cout << "DID YOU KNOW THAT NINETY-SEVEN PERCENT OF ALL LIVING THINGS ON PANDORA AREN'T EXPLODING RIGHT NOW? THAT'S BULLSH*T, BUY TORGUE!" << std::endl;
	return (50);
}

unsigned int	FragTrap::pirateShipMode(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> use the random attack pirateShipMode on <"
		<< target << ">, that's a shitty attack."
		<< std::endl;
	return(15);
}

unsigned int	FragTrap::oneShotWonder(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name
		<< "> use the random attack oneShotWonder on <"
		<< target << ">, meat confetti!"
		<< std::endl;
	return(70);
}

std::string		&FragTrap::getName(void)
{
	return (this->_name);
}
