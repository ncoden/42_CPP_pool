/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:21:19 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:00:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie();

		std::string	getName(void);
		std::string	getType(void);
		void		announce(void);
	private:
		std::string _name;
		std::string _type;
};

#endif