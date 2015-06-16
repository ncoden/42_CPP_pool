/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 12:25:18 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/15 18:07:53 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

Phonebook::Phonebook( void ) {
	contacts_count = 0;
	return;
}

Phonebook::~Phonebook( void ) {
	return;
}

void	Phonebook::AddContact(Contact *contact) {
	contacts[contacts_count] = *contact;
	contacts_count++;
}

Contact	*Phonebook::GetContact(int index) {
	int		i;

	i = 0;
	while (i < contacts_count)
	{
		if (contacts[i].index == index)
			return (&contacts[i]);
		i++;
	}
	return (NULL);
}

void	Phonebook::EachContact(void (Contact::*func)(void)) {
	int		i;

	i = 0;
	while (i < contacts_count)
	{
		(contacts[i].*func)();
		std::cout << std::endl;
		i++;
	}
}

bool	Phonebook::IsFull(void) {
	if (contacts_count >= 7)
		return true;
	else
		return false;
}
