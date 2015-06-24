/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 00:53:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

							Bureaucrat::Bureaucrat(std::string const &name, int grade)
								throw(GradeTooHighException, GradeTooLowException):
								_name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
}

							Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

							Bureaucrat::~Bureaucrat(void) {}

Bureaucrat					&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

void						Bureaucrat::incrementGrade(void)
								throw(GradeTooHighException)
{
	if (this->_grade <= 1)
		throw (GradeTooHighException());
	this->_grade--;
}

void						Bureaucrat::decrementGrade(void)
								throw(GradeTooLowException)
{
	if (this->_grade >= 150)
		throw (GradeTooLowException());
	this->_grade++;
}

void						Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name
			<< " signs " << form.getName()
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name
			<< " cannot sign " << form.getName()
			<< " because " << e.what()
			<< std::endl;
	}
}

void						Bureaucrat::executeForm(Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name
			<< " executes " << form.getName()
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name
			<< " cannot execute " << form.getName()
			<< " because " << e.what()
			<< std::endl;
	}
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
