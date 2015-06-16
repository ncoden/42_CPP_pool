/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:21:19 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:00:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <time.h>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		std::string	getName(void);
		std::string	getType(void);
		std::string	name(int i);
		void		announce(void);
		int			getNb(void);
	private:
		std::string _name;
		std::string _type;
		static int	_nb;
};

#endif