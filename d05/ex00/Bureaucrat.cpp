/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 20:47:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

							Bureaucrat::Bureaucrat(std::string const &name, int grade):
								_name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

							Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

							Bureaucrat::~Bureaucrat(void) {}

Bureaucrat					&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	(void)rhs;
	return (*this);
}

void						Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void						Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

std::string	const			&Bureaucrat::getName(void) const { return (this->_name); }
int							Bureaucrat::getGrade(void) const { return (this->_grade); }

std::ostream				&operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName()
		<< ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}

							Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
							Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
							Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

							Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
							Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
							Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}
