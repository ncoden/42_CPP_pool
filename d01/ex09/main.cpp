/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 00:05:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/17 00:34:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int				main(void)
{
	Logger		logger1("logger1.log");
	Logger		logger2("logger2.log");

	logger1.log("console", "Log test of LOGGER1 to console");
	logger1.log("file", "Log test of LOGGER1 to log file (1/2)");
	logger1.log("file", "Log test of LOGGER1 to log file (2/2)");

	logger2.log("console", "Log test of LOGGER2 to console");
	logger2.log("file", "Log test of LOGGER2 to log file (1/2)");
	logger2.log("file", "Log test of LOGGER2 to log file (2/2)");

}
