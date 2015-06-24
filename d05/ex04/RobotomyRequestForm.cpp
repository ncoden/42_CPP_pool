/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 01:05:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"
#include <time.h>
#include <stdlib.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy Request Form", 72, 45),
	_target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	Form("Robotomy Request Form", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void						RobotomyRequestForm::beExecuted(void) const
{
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized succefully !" << std::endl;
	else
		std::cout << "Oups... something happend during the robotomisation !" << std::endl;
}

std::string const			&RobotomyRequestForm::getTarget(void) const { return (this->_target); }
