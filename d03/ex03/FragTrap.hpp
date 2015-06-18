/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 19:17:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		static int						_attack_number;
		static unsigned int (FragTrap::*_attacks[])(std::string const &target);

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);

		FragTrap		&operator=(FragTrap const &rhs);

		unsigned int	vaulthunter_dot_exe(std::string const &target);

		unsigned int	clapInTheBox(std::string const &target);
		unsigned int	laserInferno(std::string const &target);
		unsigned int	torgueFiesta(std::string const &target);
		unsigned int	pirateShipMode(std::string const &target);
		unsigned int	oneShotWonder(std::string const &target);
};

#endif
