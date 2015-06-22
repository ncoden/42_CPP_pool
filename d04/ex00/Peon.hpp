/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 08:37:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(std::string name);
		~Peon(void);
		Peon(Peon const &src);

		Peon				&operator=(Peon const &rhs);

		void				getPolymorphed(void) const;
};

#endif
