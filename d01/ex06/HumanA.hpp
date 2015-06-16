/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:58:53 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		Weapon			&_weapon;

	public:
		std::string		name;

		HumanA(const char *name, Weapon &weapon);
		~HumanA(void);

		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif