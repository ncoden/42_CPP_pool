/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeString.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 20:36:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "TypeString.hpp"
#include "errno.h"

							TypeString::TypeString(std::string const &data)
{
	_data = data;
}

							TypeString::TypeString(TypeString const &src)
{
	*this = src;
}

							TypeString::~TypeString(void) {}

TypeString					&TypeString::operator=(TypeString const &rhs)
{
	_data = rhs._data;
	return (*this);
}

							TypeString::operator std::string const &(void) const
{
	return (_data);
}

							TypeString::operator char(void) const
{
	char	n = static_cast<char>(std::atoi(this->_data.c_str()));
	if (errno)
		throw (NoConversionException());
	return (n);
}

							TypeString::operator int(void) const
{
	int		n = std::atoi(this->_data.c_str());
	if (errno)
		throw (NoConversionException());
	return (n);
}

							TypeString::operator float(void) const
{
	char	n = std::atof(this->_data.c_str());
	if (errno)
		throw (NoConversionException());
	return (n);
}

							TypeString::operator double(void) const
{
	char	n = std::strtod(this->_data.c_str(), NULL);
	if (errno)
		throw (NoConversionException());
	return (n);
}

std::ostream				&operator<<(std::ostream &os, TypeString const &typestring)
{
	os << static_cast<std::string const &>(typestring);
	return (os);
}

							TypeString::NoConversionException::NoConversionException(void) {}
							TypeString::NoConversionException::~NoConversionException(void) throw() {}
char const					*TypeString::NoConversionException::what(void) const throw()
{
	return ("No conversion");
}