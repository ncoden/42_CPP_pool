/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:00:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal(void)
{}

AsteroBocal::AsteroBocal(AsteroBocal const &src)
{
	*this = src;
}

AsteroBocal::~AsteroBocal(void)
{}

AsteroBocal			&AsteroBocal::operator=(AsteroBocal const &rhs)
{
	(void)rhs;
	return (*this);
}


std::string				AsteroBocal::beMined(DeepCoreMiner *laser) const
{
	(void)laser;
	return ("Thorite");
}

std::string				AsteroBocal::beMined(StripMiner *laser) const
{
	(void)laser;
	return ("Flavium");
}

std::string	const		AsteroBocal::getName(void) const
{
	return ("AsteroBocal");
}
