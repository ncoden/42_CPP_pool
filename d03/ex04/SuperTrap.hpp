/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 21:11:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap:
	virtual public FragTrap,
	virtual public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const &src);

		SuperTrap		&operator=(SuperTrap const &rhs);
};

#endif