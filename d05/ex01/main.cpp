/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:30:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 22:01:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	Form		form("Form 42C", 21, 21);
	std::cout << form;

	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << bob;
		bob.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jule("Jule", 2);
		std::cout << jule;
		jule.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jule" << std::endl;
	}

	return (0);
}