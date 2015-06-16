/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:57:48 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 15:58:32 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : brain()
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string		Human::identify(void) const
{
	return this->brain.identify();
}

Brain			Human::getBrain(void)
{
	return this->brain;
}