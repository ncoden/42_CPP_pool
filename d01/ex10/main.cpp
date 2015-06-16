/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 00:39:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/17 01:41:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

#include <sys/stat.h>

void		print_stream(std::istream &stream)
{
	std::string		buffer;

	while (!stream.eof())
	{
		getline(stream, buffer);
		std::cout << buffer << std::endl;
	}
}

void		print_error(std::string filename, std::string message)
{
	std::cout << "cat: " << filename
			<< ": " << message << std::endl;
}

void		print_file(std::string filename)
{
	struct stat		st;
	std::ifstream	file;

	lstat(filename.c_str(), &st);
	if (S_ISDIR(st.st_mode))
		print_error(filename, "Is a directory");
	else
	{
		file.open(filename);
		if (errno)
			print_error(filename, strerror(errno));
		else if (file.is_open())
		{
			print_stream(file);
			file.close();
		}
	}
}

int			main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			print_file(av[i]);
			i++;
		}
	}
	else
		print_stream(std::cin);
}
