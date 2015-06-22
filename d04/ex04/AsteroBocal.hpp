/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:36:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 16:55:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_H
# define ASTEROBOCAL_H

# include <string>
# include "IAsteroid.hpp"

class AsteroBocal: public IAsteroid
{
	public:
		AsteroBocal(void);
		~AsteroBocal(void);
		AsteroBocal(AsteroBocal const &src);

		AsteroBocal				&operator=(AsteroBocal const &rhs);

		std::string				beMined(DeepCoreMiner *laser) const;
		std::string				beMined(StripMiner *laser) const;

		std::string	const		getName(void) const;
};

#endif
