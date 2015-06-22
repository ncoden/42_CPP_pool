/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 09:25:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist(void);
		~PowerFist(void);
		PowerFist(PowerFist const &src);

		PowerFist				&operator=(PowerFist const &rhs);

		void					attack() const;
};

#endif
