/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 22:02:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

							Form::Form(std::string const &name, int minGradeSign, int minGradeExec)
								throw(GradeTooHighException, GradeTooLowException):
								_name(name)
{
	if (minGradeSign < 1 || minGradeExec < 1)
		throw (GradeTooHighException());
	if (minGradeSign > 150 || minGradeExec > 150)
		throw (GradeTooLowException());
	this->_minSignGrade = minGradeSign;
	this->_minExecGrade = minGradeExec;
}

							Form::Form(Form const &src)
{
	*this = src;
}

							Form::~Form(void) {}

Form					&Form::operator=(Form const &rhs)
{
	this->_name = rhs._name;
	this->_minSignGrade = rhs._minSignGrade;
	this->_minExecGrade = rhs._minExecGrade;
	return (*this);
}

void						Form::beSigned(Bureaucrat const &bureaucrat)
								throw(GradeTooLowException)
{
	if (bureaucrat.getGrade() > this->_minSignGrade)
		throw (GradeTooLowException());
	this->_signed = true;
}

bool						Form::isSigned(void) const { return (this->_signed); }
std::string	const			&Form::getName(void) const { return (this->_name); }
int							Form::getMinSignGrade(void) const { return (this->_minSignGrade); }
int							Form::getMinExecGrade(void) const { return (this->_minExecGrade); }

std::ostream				&operator<<(std::ostream &os, Form const &form)
{
	os	<< form.getName() << ", ";
	if (!form.isSigned())
		os << "not ";
	os	<< "signed, min sign grade : " << form.getMinSignGrade() 
		<< ", min execution grade : " << form.getMinExecGrade() << std::endl;
	return (os);
}

							Form::GradeTooHighException::GradeTooHighException(void) {}
							Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
							Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(Form::GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

							Form::GradeTooLowException::GradeTooLowException(void) {}
							Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
							Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(Form::GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}
