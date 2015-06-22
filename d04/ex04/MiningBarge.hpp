/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:39:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:07:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_H
# define MININGBARGE_H

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
	private:
		int						_laser_count;
		IMiningLaser			*_lasers[4];

	public:
		MiningBarge(void);
		~MiningBarge(void);
		MiningBarge(MiningBarge const &src);

		MiningBarge				&operator=(MiningBarge const &rhs);

		void					equip(IMiningLaser *laser);
		void					mine(IAsteroid *asteroid) const;
};

#endif
