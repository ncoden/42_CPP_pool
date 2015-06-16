/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:57:56 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:01:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);

		Brain const		brain;

		std::string		identify(void) const;
		Brain 			getBrain(void);
};

#endif