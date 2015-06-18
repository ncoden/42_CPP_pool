/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 16:44:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int				main(void)
{
	FragTrap	dador("Vark Dador");
	FragTrap	kule("Kule");

	dador.rangedAttack("Kule");
	kule.takeDamage(dador.rangedAttackDamage);

	kule.meleeAttack("Vark Dador");
	dador.takeDamage(kule.meleeAttackDamage);

	dador.meleeAttack("Kule");
	kule.takeDamage(dador.meleeAttackDamage);

	kule.rangedAttack("Vark Dador");
	dador.takeDamage(kule.rangedAttackDamage);

	kule.beRepaired(50);

	kule.rangedAttack("Vark Dador");
	dador.takeDamage(kule.rangedAttackDamage);

	dador.takeDamage(kule.vaulthunter_dot_exe("Vark Dador"));
	dador.takeDamage(kule.vaulthunter_dot_exe("Vark Dador"));
	dador.takeDamage(kule.vaulthunter_dot_exe("Vark Dador"));
	dador.takeDamage(kule.vaulthunter_dot_exe("Vark Dador"));

	kule.takeDamage(200);
}
