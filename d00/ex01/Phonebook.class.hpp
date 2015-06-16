/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 12:28:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 19:48:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact.class.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int contacts_count;
	public:
		Phonebook(void);
		~Phonebook(void);

		void AddContact(Contact *contact);
		Contact	*GetContact(int index);
		bool IsFull(void);
		void EachContact(void (Contact::*func)(void));
};

#endif