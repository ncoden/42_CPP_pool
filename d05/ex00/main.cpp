/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:30:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 20:51:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int				main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 2);
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jean("Jean", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jean" << std::endl;
	}

	return (0);
}