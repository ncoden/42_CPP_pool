/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:19:31 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:24:18 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
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