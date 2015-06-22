/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:59:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid(void)
{}

BocalSteroid::BocalSteroid(BocalSteroid const &src)
{
	*this = src;
}

BocalSteroid::~BocalSteroid(void)
{}

BocalSteroid			&BocalSteroid::operator=(BocalSteroid const &rhs)
{
	(void)rhs;
	return (*this);
}


std::string				BocalSteroid::beMined(DeepCoreMiner *laser) const
{
	(void)laser;
	return ("Zazium");
}

std::string				BocalSteroid::beMined(StripMiner *laser) const
{
	(void)laser;
	return ("Krpite");
}

std::string	const		BocalSteroid::getName(void) const
{
	return ("BocalSteroid");
}
