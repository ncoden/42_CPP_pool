/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 23:33:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/17 00:29:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Logger.hpp"

int																Logger::_out_number = 2;
std::pair<std::string, void (Logger::*)(std::string const &)>	Logger::_outs[] = {
	std::pair<std::string, void (Logger::*)(std::string const &)>("console", &Logger::logToConsole),
	std::pair<std::string, void (Logger::*)(std::string const &)>("file", &Logger::logToFile)
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
		if (dest == _outs[i].first)
		{
			(this->*_outs[i].second)(message);
			break;
		}
		i++;
	}
}
