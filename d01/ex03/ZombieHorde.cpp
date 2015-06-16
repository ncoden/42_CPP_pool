/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:05:42 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:34:48 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	std::cout << "ZombieHorde:" << std::endl;
	this->_n = N;
	this->_horde = new Zombie[N];
	return;
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_horde;
}

void	ZombieHorde::announce(void) {
	int	i;

	i = 0;
	while (i < this->_n)
	{
		this->_horde[i].announce();
		i++;
	}
	return;
}
