/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 20:42:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 20:45:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "serialize.hpp"

int			main(void)
{
	srand(time(NULL));
	void		*buff = serialize();
	Data		*raw = deserialize(buff);
	std::cout	<< raw->s1
				<< raw->n
				<< raw->s2
				<< std::endl;
	return 0;
}
