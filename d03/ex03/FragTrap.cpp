/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 20:11:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "FragTrap.hpp"

int						FragTrap::_attack_number = 5;
unsigned int (FragTrap::*FragTrap::_attacks[])(std::string const &target) = {
	&FragTrap::clapInTheBox,
	&FragTrap::laserInferno,
	&FragTrap::torgueFiesta,
	&FragTrap::pirateShipMode,
	&FragTrap::oneShotWonder
};

FragTrap::FragTrap(std::string name):
	ClapTrap(name, "FR4G-TP", 100, 100, 30, 20, 5)
{
	srand(time(NULL));
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << _name
		<< ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
		<< std:: endl;
}

FragTrap::FragTrap(FragTrap const &src):
	ClapTrap(src._name, "FR4G-TP", 100, 100, 30, 20, 5)
{
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << _name
		<< ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
		<< std:: endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Oh, FragTrap is DEAD !" << std::endl;
}

FragTrap		&FragTrap::operator=(FragTrap const	&rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
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
