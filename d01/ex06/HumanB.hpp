/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:00:29 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 17:56:42 by mdarriga         ###   ########.fr       */
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