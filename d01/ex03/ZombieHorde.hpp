/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:05:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:00:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);
	private:
		int		_n;
		Zombie	*_horde;
};

#endif