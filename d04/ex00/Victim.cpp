/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:22:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Victim.hpp"

Victim::Victim(std::string name):
	_name(name)
{
	std::cout << "Some random victim called " << this->_name
		<< " just popped !" << std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->_name
		<< " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name
		<< " just died for no apparent reason !" << std::endl;
}

Victim				&Victim::operator=(Victim const	&rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::ostream		&operator<<(std::ostream &os, Victim const &rhs)
{
	os << "I'm " << rhs.getName()
		<< " and i like otters !" << std::endl;
	return (os);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->_name
		<< " has been turned into a cute little sheep !" << std::endl;
}

std::string	const	&Victim::getName(void) const { return (this->_name); }
