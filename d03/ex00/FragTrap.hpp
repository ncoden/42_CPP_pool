/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 17:30:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <string>

class FragTrap
{
	private:
		static int						_attack_number;
		static unsigned int (FragTrap::*_attacks[])(std::string const &target);

		static unsigned int const	_maxHitPoints;
		static unsigned int const	_maxEnergyPoints;
		static unsigned int const	_armorDamageReduction;

	public:
		static unsigned int const	meleeAttackDamage;
		static unsigned int const	rangedAttackDamage;

	private:
		std::string					_name;
		unsigned int				_hitPoints;
		unsigned int				_energyPoints;
		unsigned int				_level;

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);

		FragTrap		&operator=(FragTrap const &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const &target);

		unsigned int	clapInTheBox(std::string const &target);
		unsigned int	laserInferno(std::string const &target);
		unsigned int	torgueFiesta(std::string const &target);
		unsigned int	pirateShipMode(std::string const &target);
		unsigned int	oneShotWonder(std::string const &target);

		std::string		&getName(void);
};

#endif
