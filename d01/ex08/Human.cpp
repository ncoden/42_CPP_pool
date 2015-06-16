/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:30:06 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/17 00:06:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Human.hpp"

int																Human::_attack_number = 3;
std::pair<std::string, void (Human::*)(std::string const &)>	Human::_attacks[] = {
	std::pair<std::string, void (Human::*)(std::string const &)>("meleeAttack", &Human::meleeAttack),
	std::pair<std::string, void (Human::*)(std::string const &)>("rangedAttack", &Human::rangedAttack),
	std::pair<std::string, void (Human::*)(std::string const &)>("intimidatingShout", &Human::intimidatingShout)
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
		if (action_name == _attacks[i].first)
		{
			(this->*_attacks[i].second)(target);
			break;
		}
		i++;
	}
}
