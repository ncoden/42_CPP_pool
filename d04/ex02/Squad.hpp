/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 11:15:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 12:00:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	private:
		int				_unit_count;
		int				_unit_max;
		ISpaceMarine	*_units[16];

	public:
		Squad(void);
		~Squad(void);
		Squad(Squad const &src);

		Squad			&operator=(Squad const &rhs);

		int				getCount() const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *unit);
};

#endif
