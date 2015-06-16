/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:57:48 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:02 by ncoden           ###   ########.fr       */
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