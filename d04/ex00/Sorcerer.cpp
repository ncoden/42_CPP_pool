/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:22:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string name, std::string type):
	_name(name),
	_type(type)
{
	std::cout << this->_name
		<< ", " << this->_type
		<< ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	std::cout << this->_name
		<< ", " << this->_type
		<< ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name
		<< ", " << this->_type
		<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer			&Sorcerer::operator=(Sorcerer const	&rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_type = rhs._type;
	}
	return (*this);
}

std::ostream		&operator<<(std::ostream &os, Sorcerer const &rhs)
{
	os << "I am " << rhs.getName()
		<< ", " << rhs.getType()
		<< ", and I like ponies !" << std::endl;
	return (os);
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string	const	&Sorcerer::getName(void) const { return (this->_name); }
std::string	const	&Sorcerer::getType(void) const { return (this->_type); }
