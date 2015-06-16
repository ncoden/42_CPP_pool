/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:58:53 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 17:32:13 by mdarriga         ###   ########.fr       */
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