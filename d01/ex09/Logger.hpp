/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 23:16:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/17 00:27:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

class Logger
{
	private:
		static std::pair<std::string, void (Logger::*)(std::string const &)>	_outs[];
		static int																_out_number;

		std::string																_out_file;

		std::string		makeLogEntry(std::string const &message);
		void			logToConsole(std::string const &message);
		void			logToFile(std::string const &message);

	public:
		Logger(std::string const &out_file);
		~Logger(void);

		void			log(std::string const &dest, std::string const &message);
};

#endif
