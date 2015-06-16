/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 20:04:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 21:23:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int				main(int ac, char **av)
{
	string		buffer;
	ifstream	file_from;
	ofstream	file_to;
	string		filename;
	string		word_from;
	size_t		word_from_start;
	string		word_to;
	size_t		word_to_len;

	if (ac == 4)
	{
		filename = av[1];
		file_from.open(filename, ios::in);
		file_to.open(filename + ".replace", ios::out | ios::trunc);

		if (file_from.is_open() && file_to.is_open())
		{
			word_from = av[2];
			word_to = av[3];
			word_to_len = word_from.size();

			while (getline(file_from, buffer))
			{
				word_from_start = 0;
				while ((word_from_start = buffer.find(word_from, word_from_start)) != string::npos)
					buffer.replace(word_from_start, word_to_len, word_to);
				file_to << buffer << endl;
			}

			file_from.close();
			file_to.close();
		}
	}
	return (0);
}
