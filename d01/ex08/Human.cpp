/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:30:06 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 22:58:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Human.hpp"

using namespace std;

int												Human::_attack_number = 3;
pair<string, void (Human::*)(string const &)>	Human::_attacks[] = {
	pair<string, void (Human::*)(string const &)>("meleeAttack", &Human::meleeAttack),
	pair<string, void (Human::*)(string const &)>("rangedAttack", &Human::rangedAttack),
	pair<string, void (Human::*)(string const &)>("intimidatingShout", &Human::intimidatingShout)
};

Human::Human(char const *name):
	name(name) {}

Human::~Human(void) {}

void			Human::meleeAttack(string const &target)
{
	cout << name << " attack " << target << " with a melee attack" << endl;
}

void			Human::rangedAttack(string const &target)
{
	cout << name << " attack " << target << " with a ranged attack" << endl;
}

void			Human::intimidatingShout(string const &target)
{
	cout << name << " attack " << target << " with a intimidating shout" << endl;
}

void			Human::action(string const &action_name, string const &target)
{
	int			i;

	i = 0;
	while (i < _attack_number)
	{
		if (action_name == _attacks[i].first)
		{
			(this->*_attacks[i].second)(target);
			break;
		}
		i++;
	}
}