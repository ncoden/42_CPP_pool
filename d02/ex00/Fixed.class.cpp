/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 12:26:20 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/17 13:55:56 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int	const	Fixed::_nBit = 8;

Fixed::Fixed(void) {
	this->_rawBits = 0;
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void		Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}
