/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 20:48:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int				main(void)
{
	ScavTrap	dador("Vark Dador");
	FragTrap	kule("Kule");
	NinjaTrap	ninja("Ninja");
	SuperTrap	super("Super");

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

	dador.takeDamage(super.vaulthunter_dot_exe(dador.getName()));
	kule.takeDamage(super.vaulthunter_dot_exe(kule.getName()));
	ninja.takeDamage(super.vaulthunter_dot_exe(ninja.getName()));
	super.ninjaShoebox(dador);
	super.ninjaShoebox(kule);

	kule.takeDamage(200);
}
