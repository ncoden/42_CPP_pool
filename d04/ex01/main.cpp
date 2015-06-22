/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 09:21:41 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 13:08:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int				main(void)
{
	PlasmaRifle		*pr = new PlasmaRifle();
	PowerFist		*pf = new PowerFist();

	SuperMutant		*mutant = new SuperMutant();
	RadScorpion		*scorpion = new RadScorpion();
	Character		*zaz = new Character("zaz");

	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->attack(mutant);
	std::cout << *zaz;

	SuperMutant	dup = *mutant;

	return (0);
}
