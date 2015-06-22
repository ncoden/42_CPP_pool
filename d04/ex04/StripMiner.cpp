/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:26:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{}

StripMiner::StripMiner(StripMiner const &src)
{
	*this = src;
}

StripMiner::~StripMiner(void)
{}

StripMiner				&StripMiner::operator=(StripMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void					StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining ... got " << asteroid->beMined(this)
			<< " ! *" << std::endl;
}
