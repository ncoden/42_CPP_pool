/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:30:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 01:33:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int				main(void)
{
	OfficeBlock				ob;
	Intern					joe;
	Bureaucrat				bob("Bob", 50);
	Bureaucrat				jule("President", 2);

	ob.setIntern(joe);
	ob.setSigner(bob);
	ob.setExecutor(jule);

	try
	{
		ob.doBureaucracy("shrubbery creation", "mars");
		ob.doBureaucracy("robotomy request", "terre");
		ob.doBureaucracy("presidential pardon", "president");
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	return (0);
}
