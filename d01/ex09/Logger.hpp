/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 23:16:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 07:29:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

struct t_output;

class Logger
{
	private:
		static t_output	_outs[];
		static int		_out_number;

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
