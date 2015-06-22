/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:26:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &src)
{
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner(void)
{}

DeepCoreMiner			&DeepCoreMiner::operator=(DeepCoreMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void					DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep ... got " << asteroid->beMined(this)
			<< " ! *" << std::endl;
}
