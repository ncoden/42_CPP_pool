/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:21:48 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 13:48:49 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
	private:
		std::string	_type;
};

#endif