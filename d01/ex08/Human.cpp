/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:30:06 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 07:27:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Human.hpp"

struct t_attack
{
	std::string		name;
	void			(Human::*func)(std::string const &);
};

int				Human::_attack_number = 3;
t_attack		Human::_attacks[] = {
	{"meleeAttack", &Human::meleeAttack},
	{"rangedAttack", &Human::rangedAttack},
	{"intimidatingShout", &Human::intimidatingShout}
};

Human::Human(char const *name):
	name(name) {}

Human::~Human(void) {}

void			Human::meleeAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a melee attack" << std::endl;
}

void			Human::rangedAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a ranged attack" << std::endl;
}

void			Human::intimidatingShout(std::string const &target)
{
	std::cout << name << " attack " << target << " with a intimidating shout" << std::endl;
}

void			Human::action(std::string const &action_name, std::string const &target)
{
	int			i;

	i = 0;
	while (i < _attack_number)
	{
		if (action_name == _attacks[i].name)
		{
			(this->*_attacks[i].func)(target);
			break;
		}
		i++;
	}
}
