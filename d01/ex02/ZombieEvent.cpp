/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:21:33 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 13:56:24 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	return ;
}

ZombieEvent::~ZombieEvent(void){
	return ;
}

void	ZombieEvent::setZombieType(std::string type){
	std::cout << "setZombieType" << std::endl;
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	std::cout << "newZombie" << std::endl;
	Zombie *newZombie = new Zombie(this->_type, name);
	return newZombie;
}