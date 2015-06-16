/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:58:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {
	private:
		std::string		_type;

	public:
		std::string		name;

		Weapon(const char *name);
		~Weapon();

		std::string		getType(void);
		void			setType(const char *type);
};

#endif