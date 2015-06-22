/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:21:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src):
	Victim(src)
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon				&Peon::operator=(Peon const	&rhs)
{
	if (this != &rhs)
		Victim::operator=(rhs);
	return (*this);
}

void				Peon::getPolymorphed(void) const
{
	std::cout << this->_name
		<< " has been turned into a pink pony !" << std::endl;
}
