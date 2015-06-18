/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 17:27:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>

class ScavTrap
{
	private:
		static int					_challenge_number;
		static std::string			_challenges[];

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
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &src);

		ScavTrap		&operator=(ScavTrap const &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const &target);

		std::string		&getName(void);
};

#endif