/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:45:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:18:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void):
	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src):
	Enemy(80, "RadScorpion")
{
	*this = src;
	std::cout << "* click click click *" << std::endl;

}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;

}

RadScorpion				&RadScorpion::operator=(RadScorpion const	&rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return (*this);
}
