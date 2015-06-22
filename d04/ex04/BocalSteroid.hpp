/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:36:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:55:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCALSTEROID_H
# define BOCALSTEROID_H

# include <string>
# include "IAsteroid.hpp"

class BocalSteroid: public IAsteroid
{
	public:
		BocalSteroid(void);
		~BocalSteroid(void);
		BocalSteroid(BocalSteroid const &src);

		BocalSteroid			&operator=(BocalSteroid const &rhs);

		std::string				beMined(DeepCoreMiner *laser) const;
		std::string				beMined(StripMiner *laser) const;

		std::string	const		getName(void) const;
};

#endif
