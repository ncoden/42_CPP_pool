/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB {
	private:
		Weapon			*_weapon;

	public:
		std::string		name;

		HumanB(const char *name);
		~HumanB(void);

		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif