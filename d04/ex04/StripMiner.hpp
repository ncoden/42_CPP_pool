/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:10:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_H
# define STRIPMINER_H

# include <string>
# include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
	public:
		StripMiner(void);
		~StripMiner(void);
		StripMiner(StripMiner const &src);

		StripMiner				&operator=(StripMiner const &rhs);

		void					mine(IAsteroid *asteroid);
};

#endif
