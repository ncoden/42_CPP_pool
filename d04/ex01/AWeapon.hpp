/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 09:31:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <string>

class AWeapon
{
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		~AWeapon(void);
		AWeapon(AWeapon const &src);

		AWeapon				&operator=(AWeapon const &rhs);

		std::string	const	&getName(void) const;
		int					getAPCost() const;
		int					getDamage() const;

		virtual void		attack() const = 0;
};

#endif
