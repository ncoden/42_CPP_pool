/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 22:47:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 23:12:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template<typename T>
void			iter(T *array, size_t len, void (*func)(T &))
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		(*func)(array[i]);
		i++;
	}
}

template<typename T>
void			print(T &data)
{
	std::cout << data << std::endl;
}

int main( void )
{
	int				array_ints[] = {
		11, 222, 33, 42, 5555
	};
	std::string		array_strings[] = {
		"1AA", "2BB", "3CC", "4DD", "5EE"
	};

	iter<int>(array_ints, 5, &print<int>);
	iter<std::string>(array_strings, 5, &print<std::string>);

	return (0);
}
