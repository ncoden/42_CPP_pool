/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:27:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_H
# define DEEPCOREMINER_H

# include <string>
# include "IMiningLaser.hpp"

class DeepCoreMiner: public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		~DeepCoreMiner(void);
		DeepCoreMiner(DeepCoreMiner const &src);

		DeepCoreMiner			&operator=(DeepCoreMiner const &rhs);

		void					mine(IAsteroid *asteroid);
};

#endif
