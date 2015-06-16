/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:22:01 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:24:42 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <time.h>

std::string	name(void)
{
	char	*tab[] = {
		(char *)"John",
		(char *)"Marvin",
		(char *)"Sandor",
		(char *)"Gerard",
		(char *)"Molly",
		(char *)"Jacques",
		(char *)"Rosalie",
		(char *)"Bernard",
		(char *)"Vatourni",
		(char *)"Krirsten",
		(char *)"Aliandie",
	};
	int random;
	random = time(NULL) % 11;
	return((std::string) tab[random]);
}

void		randomChump()
{
	std::cout << "RandomChump :" << std::endl;
	ZombieEvent event = ZombieEvent();
	event.setZombieType("Walker");
	Zombie *newZombie = event.newZombie(name());
	newZombie->announce();
	delete newZombie;
}

int			main(void)
{
	std::cout << "ZombieOnTheHeap: " << std::endl;
	randomChump();
	std::cout << "ZombieOnTheStack:" << std::endl;
	Zombie spitter = Zombie("Fred", "Spitter");
	spitter.announce();
	return (0);
}