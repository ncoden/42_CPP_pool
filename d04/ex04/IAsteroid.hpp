/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:17:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:14:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_H
# define IASTEROID_H

# include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}

		virtual std::string			beMined(DeepCoreMiner *laser) const = 0;
		virtual std::string			beMined(StripMiner *laser) const = 0;

		virtual std::string	const	getName(void) const = 0;
};

#endif
