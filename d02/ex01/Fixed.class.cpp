/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 14:04:24 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/17 17:08:33 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.class.hpp"

int	const	Fixed::_nBit = 8;

Fixed::Fixed(void)
{
	this->_rawBits = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int i)
{
	this->_rawBits = i << this->_nBit;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float f)
{
	this->_rawBits = (int)roundf(f * (1 << this->_nBit));
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void			Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed			&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs._rawBits;
	return *this;
}

int				Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_nBit);
}

float			Fixed::toFloat(void) const
{
	return (((float)this->_rawBits) / (1 << this->_nBit));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
