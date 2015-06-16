/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:58:02 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 16:02:11 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	void const *address = static_cast<const void*>(this);
	std::stringstream address2;
	address2 << address;
	this->_address = address2.str();
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string		Brain::identify(void) const
{
	return this->_address;
}