/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 17:33:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int				main(void)
{
	ScavTrap	dador("Vark Dador");
	FragTrap	kule("Kule");

	dador.rangedAttack(kule.getName());
	kule.takeDamage(dador.rangedAttackDamage);

	kule.meleeAttack(dador.getName());
	dador.takeDamage(kule.meleeAttackDamage);

	dador.meleeAttack(kule.getName());
	kule.takeDamage(dador.meleeAttackDamage);

	kule.rangedAttack(dador.getName());
	dador.takeDamage(kule.rangedAttackDamage);

	kule.beRepaired(50);

	kule.rangedAttack(dador.getName());
	dador.takeDamage(kule.rangedAttackDamage);

	dador.challengeNewcomer(kule.getName());
	dador.challengeNewcomer(kule.getName());
	dador.challengeNewcomer(kule.getName());

	dador.takeDamage(kule.vaulthunter_dot_exe(dador.getName()));
	dador.takeDamage(kule.vaulthunter_dot_exe(dador.getName()));

	kule.takeDamage(200);
}
