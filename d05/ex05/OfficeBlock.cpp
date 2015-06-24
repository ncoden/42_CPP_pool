/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 02:41:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

OfficeBlock::OfficeBlock(void)
{}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor)
{
	this->_intern = &intern;
	this->_signer = &signer;
	this->_executor = &executor;
}

OfficeBlock::~OfficeBlock(void)
{}

void						OfficeBlock::doBureaucracy(std::string const &name, std::string const &target)
{
	Form					*form;

	if (!this->_intern)
		throw (NoInternException());
	if (!this->_signer)
		throw (NoSignerException());
	if (!this->_executor)
		throw (NoExecutorException());

	form = this->_intern->makeForm(name, target);

	try
	{
		this->_signer->signForm(*form);
	}
	catch (Form::GradeTooLowException &e)
	{
		throw (SignerGradeTooLowException());
	}

	try
	{
		this->_executor->executeForm(*form);
	}
	catch (Form::GradeTooLowException &e)
	{
		throw (ExecutorGradeTooLowException());
	}
}

void						OfficeBlock::setIntern(Intern &intern) { this->_intern = &intern; }
void						OfficeBlock::setSigner(Bureaucrat &signer) { this->_signer = &signer; }
void						OfficeBlock::setExecutor(Bureaucrat &executor) { this->_executor = &executor; }

							OfficeBlock::NoInternException::NoInternException(void) {}
							OfficeBlock::NoInternException::~NoInternException(void) throw() {}
							OfficeBlock::NoInternException::NoInternException(NoInternException const &src)
{
	*this = src;
}

OfficeBlock::NoInternException	&OfficeBlock::NoInternException::operator=(OfficeBlock::NoInternException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*OfficeBlock::NoInternException::what(void) const throw()
{
	return ("No Intern");
}

							OfficeBlock::NoSignerException::NoSignerException(void) {}
							OfficeBlock::NoSignerException::~NoSignerException(void) throw() {}
							OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &src)
{
	*this = src;
}

OfficeBlock::NoSignerException	&OfficeBlock::NoSignerException::operator=(OfficeBlock::NoSignerException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*OfficeBlock::NoSignerException::what(void) const throw()
{
	return ("No Signer");
}

							OfficeBlock::NoExecutorException::NoExecutorException(void) {}
							OfficeBlock::NoExecutorException::~NoExecutorException(void) throw() {}
							OfficeBlock::NoExecutorException::NoExecutorException(NoExecutorException const &src)
{
	*this = src;
}

OfficeBlock::NoExecutorException	&OfficeBlock::NoExecutorException::operator=(OfficeBlock::NoExecutorException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*OfficeBlock::NoExecutorException::what(void) const throw()
{
	return ("No Executor");
}

							OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(void) {}
							OfficeBlock::SignerGradeTooLowException::~SignerGradeTooLowException(void) throw() {}
							OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(SignerGradeTooLowException const &src)
{
	*this = src;
}

OfficeBlock::SignerGradeTooLowException	&OfficeBlock::SignerGradeTooLowException::operator=(OfficeBlock::SignerGradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*OfficeBlock::SignerGradeTooLowException::what(void) const throw()
{
	return ("Signer Grade Too Low");
}

							OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException(void) {}
							OfficeBlock::ExecutorGradeTooLowException::~ExecutorGradeTooLowException(void) throw() {}
							OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException(ExecutorGradeTooLowException const &src)
{
	*this = src;
}

OfficeBlock::ExecutorGradeTooLowException	&OfficeBlock::ExecutorGradeTooLowException::operator=(OfficeBlock::ExecutorGradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}

char const					*OfficeBlock::ExecutorGradeTooLowException::what(void) const throw()
{
	return ("Executor Grade Too Low");
}
