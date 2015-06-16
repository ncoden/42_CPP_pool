/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 11:24:00 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 15:21:36 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Phonebook.class.hpp"

int		main(void)
{
	int			i;
	char		buf[512];
	int			index;
	Phonebook	phonebook;
	Contact		contact;
	Contact		*contactp;

	index = 1;
	std::cout << "Please enter ADD, EXIT or SEARCH" << std::endl;
	std::cin >> buf;
	i = 0;
	while (buf[i] != 0)
	{
		if (buf[i] <= 'Z' && buf[i] >= 'A')
			buf[i] = buf[i] + 32;
		i++;
	}
	while (strcmp(buf, "exit") != 0)
	{
		i = 0;
		while (buf[i] != 0)
		{
			if (buf[i] <= 'Z' && buf[i] >= 'A')
				buf[i] = buf[i] + 32;
			i++;
		}
		if (strcmp(buf, "search") == 0)
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			phonebook.EachContact(&Contact::print);
			std::cout << "Precise an index to get more information or write anything else to leave." << std::endl;
			std::cin >> buf;
			i = std::atoi(buf);
			if ((contactp = phonebook.GetContact(i)))
				contactp->print_info();
		}
		else if (strcmp(buf, "add") == 0)
		{
			if (phonebook.IsFull())
				std::cout << "Phonebook is full, please restart the program to delete them" << std::endl;
			else
			{
				std::cout << "Enter your first name" << std::endl;
				std::cin >> contact.first_name;
				std::cout << "Enter your last name" << std::endl;
				std::cin >> contact.last_name;
				std::cout << "Enter your nickname" << std::endl;
				std::cin >> contact.nickname;
				std::cout << "Enter your login" << std::endl;
				std::cin >> contact.login;
				std::cout << "Enter your postal adress" << std::endl;
				std::cin >> contact.postal_adress;
				std::cout << "Enter your email adress" << std::endl;
				std::cin >> contact.email_adress;
				std::cout << "Enter your phone number" << std::endl;
				std::cin >> contact.phone_number;
				std::cout << "Enter your birthday date" << std::endl;
				std::cin >> contact.birthday;
				std::cout << "Enter your favorite meal" << std::endl;
				std::cin >> contact.favorite_meal;
				std::cout << "Enter your underwear color" << std::endl;
				std::cin >> contact.underwear_color;
				std::cout << "Enter your darkest secret" << std::endl;
				std::cin >> contact.darkest_secret;
				contact.index = index;
				phonebook.AddContact(&contact);
				index++;
			}
		}
		else if (strcmp(buf, "exit") != 0)
		{
			std::cout << "Sorry, I couldn't recognize your command" << std::endl;
		}
		std::cout << "Please enter ADD, EXIT or SEARCH" << std::endl;
		std::cin >> buf;
	}
	std::cout << "Closing phonebook" << std::endl;
	return 0;
}
