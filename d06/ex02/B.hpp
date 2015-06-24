/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 21:05:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

# include "Base.hpp"

class B: public Base
{
	public:
								B(void);
								~B(void);
								B(B const &src);
		B						&operator=(B const &rhs);
};

#endif
