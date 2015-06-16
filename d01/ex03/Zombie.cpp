/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:19:31 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:44:18 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	Zombie::_nb = 0;

Zombie::Zombie(void) {
	if (Zombie::_nb > 9)
		Zombie::_nb = 0;
	this->_type = "Walker";
	this->_name = this->name(this->_nb);
	Zombie::_nb++;
	std::cout << "Zombie Contructor called" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie destructor called" << std::endl;
	return;
}

std::string	Zombie::getType(void) {
	return this->_type;
}

std::string	Zombie::getName(void) {
	return this->_name;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::name(int i)
{
	char	*tab[] = {
		(char *)"John",
		(char *)"Marvin",
		(char *)"Sandor",
		(char *)"Gerard",
		(char *)"Molly",
		(char *)"Jacques",
		(char *)"Rosalie",
		(char *)"Bernard",
		(char *)"Vatourni",
		(char *)"Krirsten",
		(char *)"Aliandie",
	};
	int random;
	random = (time(NULL) % 11) + i;
	if (random > 9)
		random -= 10;
	return((std::string) tab[random]);
}

int		Zombie::getNb(void) {
	return Zombie::_nb;
}