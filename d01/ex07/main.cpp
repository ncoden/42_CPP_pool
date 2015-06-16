/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 20:04:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 23:25:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int				main(int ac, char **av)
{
	std::string		buffer;
	std::ifstream	file_from;
	std::ofstream	file_to;
	std::string		filename;
	std::string		word_from;
	size_t		word_from_start;
	std::string		word_to;
	size_t		word_to_len;

	if (ac == 4)
	{
		filename = av[1];
		file_from.open(filename, std::ios::in);
		file_to.open(filename + ".replace", std::ios::out | std::ios::trunc);

		if (file_from.is_open() && file_to.is_open())
		{
			word_from = av[2];
			word_to = av[3];
			word_to_len = word_from.size();

			while (std::getline(file_from, buffer))
			{
				word_from_start = 0;
				while ((word_from_start = buffer.find(word_from, word_from_start)) != std::string::npos)
					buffer.replace(word_from_start, word_to_len, word_to);
				file_to << buffer << std::endl;
			}

			file_from.close();
			file_to.close();
		}
	}
	return (0);
}
