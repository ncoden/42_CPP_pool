/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:30:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 02:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "CentralBureaucracy.hpp"

int				main(void)
{
	CentralBureaucracy		government;

	try
	{
		/*		Because I love FR government	<3						*/
		/*		https://fr.wikipedia.org/wiki/Loi_de_Parkinson	(FR)	*/
		/*		https://en.wikipedia.org/wiki/Parkinson%27s_law	(EN)	*/

		government.feed(*new Bureaucrat("John", 5));
		government.feed(*new Bureaucrat("Joe", 3));
		government.feed(*new Bureaucrat("Jonnas", 1));
		government.feed(*new Bureaucrat("Jim", 5));
		government.feed(*new Bureaucrat("Janette", 3));
		government.feed(*new Bureaucrat("Jasphar", 1));
		government.feed(*new Bureaucrat("Julien", 5));
		government.feed(*new Bureaucrat("Jemil", 3));
		government.feed(*new Bureaucrat("Jean", 1));
		government.feed(*new Bureaucrat("Joeffray", 5));
		government.feed(*new Bureaucrat("Jacky", 3));
		government.feed(*new Bureaucrat("Jeremy", 1));
		government.feed(*new Bureaucrat("Jeff", 5));
		government.feed(*new Bureaucrat("Jazon", 3));
		government.feed(*new Bureaucrat("Jacob", 1));

		government.queueUp("Kriss");
		government.queueUp("Kelvin");
		government.queueUp("Keryan");
		government.queueUp("Kenjy");
		government.queueUp("Kassim");
		government.queueUp("Kerim");
		government.queueUp("Kameron");
		government.queueUp("Killyan");
		government.queueUp("Kyliane");
		government.queueUp("Kerem");
		government.queueUp("Kevin");
		government.queueUp("Kentin");
		government.queueUp("Khalis");
		government.queueUp("Kylan");

		/* Watch the magic happen - Done at 2:30 AM at @42born2code */
		government.doBureaucracy();
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	return (0);
}
