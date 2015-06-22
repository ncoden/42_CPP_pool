/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 14:04:24 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/22 07:35:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

int	const	Fixed::_nBit = 8;

Fixed::Fixed(void)
{
	this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int i)
{
	this->_rawBits = i << this->_nBit;
}

Fixed::Fixed(float f)
{
	this->_rawBits = (int)roundf(f * (1 << this->_nBit));
}

Fixed::~Fixed()
{
	return ;
}

int				Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void			Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int				Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_nBit);
}

float			Fixed::toFloat(void) const
{
	return (((float)this->_rawBits) / (1 << this->_nBit));
}

Fixed			&Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs._rawBits;
	return *this;
}

bool			Fixed::operator>(Fixed const &rhs) const
{
	return (this->_rawBits > rhs._rawBits);
}

bool			Fixed::operator<(Fixed const &rhs) const
{
	return (this->_rawBits < rhs._rawBits);
}

bool			Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_rawBits >= rhs._rawBits);
}

bool			Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_rawBits <= rhs._rawBits);
}

bool			Fixed::operator==(Fixed const &rhs) const
{
	return (this->_rawBits == rhs._rawBits);
}

bool			Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_rawBits != rhs._rawBits);
}

Fixed			&Fixed::operator+(Fixed const &rhs) const
{
	Fixed		*sum = new Fixed();

	sum->_rawBits = this->_rawBits + rhs._rawBits;
	return (*sum);
}

Fixed			&Fixed::operator-(Fixed const &rhs) const
{
	Fixed		*diff = new Fixed();

	diff->_rawBits = this->_rawBits - rhs._rawBits;
	return (*diff);
}

Fixed			&Fixed::operator*(Fixed const &rhs) const
{
	return (*new Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed			&Fixed::operator/(Fixed const &rhs) const
{
	return (*new Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed			&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed			&Fixed::operator++(int)
{
	Fixed		*cpy = new Fixed(*this);
	operator++();
	return (*cpy);
}

Fixed			&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed			&Fixed::operator--(int)
{
	Fixed		*cpy = new Fixed(*this);
	operator--();
	return (*cpy);
}

Fixed 			&Fixed::min(Fixed &n1, Fixed &n2)
{
	return ((n1._rawBits < n2._rawBits) ? n1 : n2);
}

Fixed 			&Fixed::max(Fixed &n1, Fixed &n2)
{
	return ((n1._rawBits > n2._rawBits) ? n1 : n2);
}

Fixed const		&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	return ((n1._rawBits < n2._rawBits) ? n1 : n2);
}

Fixed const		&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	return ((n1._rawBits > n2._rawBits) ? n1 : n2);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
