/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 20:21:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int				main(void)
{
	ScavTrap	dador("Vark Dador");
	FragTrap	kule("Kule");
	NinjaTrap	ninja("Ninja");

	dador.rangedAttack(kule.getName());
	kule.takeDamage(dador.getRangedAttackDamage());

	kule.meleeAttack(dador.getName());
	dador.takeDamage(kule.getMeleeAttackDamage());

	dador.meleeAttack(kule.getName());
	kule.takeDamage(dador.getMeleeAttackDamage());

	kule.rangedAttack(dador.getName());
	dador.takeDamage(kule.getRangedAttackDamage());

	kule.beRepaired(50);

	kule.rangedAttack(dador.getName());
	dador.takeDamage(kule.getRangedAttackDamage());

	dador.challengeNewcomer(ninja.getName());
	dador.challengeNewcomer(ninja.getName());
	dador.challengeNewcomer(ninja.getName());

	ninja.ninjaShoebox(dador);
	ninja.ninjaShoebox(dador);

	dador.takeDamage(kule.vaulthunter_dot_exe(dador.getName()));
	dador.takeDamage(kule.vaulthunter_dot_exe(dador.getName()));

	ninja.ninjaShoebox(kule);
	ninja.ninjaShoebox(kule);

	kule.takeDamage(200);
}
