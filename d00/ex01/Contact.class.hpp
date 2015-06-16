/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 14:04:37 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 19:47:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>

class Contact
{
	public:
		int		index;
		char	first_name[64];
		char	last_name[64];
		char	nickname[64];
		char	login[64];
		char	postal_adress[64];
		char	email_adress[64];
		char	phone_number[64];
		char	birthday[64];
		char	favorite_meal[64];
		char	underwear_color[64];
		char	darkest_secret[64];

		Contact(void);
		~Contact(void);

		void	print(void);
		void	print_info(void);
};

#endif