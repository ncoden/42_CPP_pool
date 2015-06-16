/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:57:56 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 15:58:55 by mdarriga         ###   ########.fr       */
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