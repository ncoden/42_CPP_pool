/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:28:51 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 19:53:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string colour): _name(name), _colour(colour) {
	std::cout << "Constructor called" << std::endl;
}

Pony::~Pony() {
	std::cout << "Destructor called" << std::endl;
}

std::string	Pony::getName(void) {
	return this->_name;
}

std::string	Pony::getColour(void) {
	return this->_colour;
}

void		Pony::setName(std::string name) {
	this->_name = name;
}

void		Pony::setColour(std::string colour) {
	this->_colour = colour;
}
