/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 23:33:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 07:28:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Logger.hpp"

struct t_output
{
	std::string		name;
	void			(Logger::*func)(std::string const &);
};

int				Logger::_out_number = 2;
t_output		Logger::_outs[] = {
	{"console", &Logger::logToConsole},
	{"file", &Logger::logToFile}
};

Logger::Logger(std::string const &out_file):
	_out_file(out_file) {}
Logger::~Logger(void) {}

std::string		Logger::makeLogEntry(std::string const &message)
{
	time_t				t = time(0);
	struct tm			*now = localtime(&t);
	std::ostringstream	entry;

	entry << '['
		<< (now->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << now->tm_mon
		<< std::setw(2) << std::setfill('0') << now->tm_mday
		<< '_'
		<< std::setw(2) << std::setfill('0') << now->tm_hour
		<< std::setw(2) << std::setfill('0') << now->tm_min
		<< std::setw(2) << std::setfill('0') << now->tm_sec
		<< "] "
		<< message;
	return (entry.str());
}

void			Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void			Logger::logToFile(std::string const &message)
{
	std::ofstream	file;

	file.open(_out_file, std::ios::out | std::ios::app);
	if (file.is_open())
		file << makeLogEntry(message) << std::endl;
}

void			Logger::log(std::string const &dest, std::string const &message)
{
	int			i;

	i = 0;
	while (i < _out_number)
	{
		if (dest == _outs[i].name)
		{
			(this->*_outs[i].func)(message);
			break;
		}
		i++;
	}
}
