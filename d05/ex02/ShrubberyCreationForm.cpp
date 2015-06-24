/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 23:10:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("Shrubbery Creation Form", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	Form("Shrubbery Creation Form", 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void						ShrubberyCreationForm::beExecuted(void)
{
	std::ofstream			file;

	file.open(this->_target + "_shrubbery");
	if (file.is_open())
	{
		file	<< "********************" << std::endl
				<< "*   /\\       .     *" << std::endl
				<< "*  /  \\ .   .      *" << std::endl
				<< "*   ||    /\\       *" << std::endl
				<< "*        /  \\      *" << std::endl
				<< "*   o   /    \\     *" << std::endl
				<< "*      o  ||       *" << std::endl
				<< "*   o           o  *" << std::endl
				<< "********************" << std::endl
				<< std::endl;
	}
}

std::string const			&ShrubberyCreationForm::getTarget(void) const { return (this->_target); }
