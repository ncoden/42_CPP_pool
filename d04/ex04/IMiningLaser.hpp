/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:15:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:14:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_H
# define IMININGLASER_H

# include <string>
# include "IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}

		virtual void			mine(IAsteroid *asteroid) = 0;
};

#endif
