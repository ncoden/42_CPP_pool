/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:21:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:00:04 by ncoden           ###   ########.fr       */
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