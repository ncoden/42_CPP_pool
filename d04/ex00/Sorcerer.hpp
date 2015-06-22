/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 08:40:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	protected:
		std::string		_name;
		std::string		_type;

	public:
		Sorcerer(std::string name, std::string type);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &src);

		Sorcerer			&operator=(Sorcerer const &rhs);

		void				polymorph(Victim const &victim) const;

		std::string	const	&getName(void) const;
		std::string	const	&getType(void) const;
};

std::ostream			&operator<<(std::ostream &os, Sorcerer const &rhs);

#endif
