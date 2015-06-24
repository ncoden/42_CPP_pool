/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 19:02:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 20:45:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "serialize.hpp"

void		*serialize(void)
{
	char				*str = new char[20];
	static const char	alphanum[] = 
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i)
		str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	*(reinterpret_cast<int *>(&str[8])) = rand();
	for (int i = 12; i < 20; ++i)
		str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	return (reinterpret_cast<void *>(str));
}

Data		*deserialize( void * raw )
{
	Data				*ret = new Data();

	ret->s1.assign(reinterpret_cast<char *>(raw), 8);
	ret->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
	ret->s2.assign(&reinterpret_cast<char *>(raw)[12], 8);
	return (ret);
}
