/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 20:44:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 21:11:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

# include <iostream>
# include <string>
# include <time.h>
# include <stdlib.h>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void		*serialize(void);
Data		*deserialize(void * raw);

#endif
