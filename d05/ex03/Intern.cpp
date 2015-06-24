/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 00:05:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{}

Intern				&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form				*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form			*form;

	if (name == "shrubbery creation")
		form = (Form *)new ShrubberyCreationForm(target);
	else if (name == "robotomy request")
		form = (Form *)new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = (Form *)new PresidentialPardonForm(target);
	else
	{
		std::cout << "Intern can't find the " << name << " form !" << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates " << *form;
	return (form);
}