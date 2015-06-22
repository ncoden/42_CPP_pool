/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 11:21:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:00:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void):
	AMateria("ice")
{}

Ice::Ice(Ice const &src):
	AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{}

Ice					&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria			*Ice::clone() const
{
	return ((AMateria *)new Ice(*this));
}

void				Ice::use(ICharacter const &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
