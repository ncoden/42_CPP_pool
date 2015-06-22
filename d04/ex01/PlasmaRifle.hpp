/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 09:23:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle(void);
		~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);

		PlasmaRifle				&operator=(PlasmaRifle const &rhs);

		void					attack() const;
};

#endif
