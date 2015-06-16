/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:05:55 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:31:24 by mdarriga         ###   ########.fr       */
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