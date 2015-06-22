/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 12:02:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 12:28:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	int				i;
	int				count;
	ISpaceMarine	*cur;

	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	ISquad			*vlc = new Squad;
	ISquad			*cvl = new Squad;
	Squad			lcv;
	ISquad			*clv;

	vlc->push(bob);
	vlc->push(jim);

	i = 0;
	count = vlc->getCount();
	while (i < count)
	{
		cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		i++;
	}
	*cvl = *vlc;
	clv = new Squad(lcv);
	delete vlc;

	return (0);
}