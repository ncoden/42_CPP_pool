/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 08:47:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <string>
# include <iostream>

class Victim
{
	protected:
		std::string		_name;

	public:
		Victim(std::string name);
		~Victim(void);
		Victim(Victim const &src);

		Victim				&operator=(Victim const &rhs);

		virtual void		getPolymorphed(void) const;

		std::string	const	&getName(void) const;
};

std::ostream			&operator<<(std::ostream &os, Victim const &rhs);

#endif
