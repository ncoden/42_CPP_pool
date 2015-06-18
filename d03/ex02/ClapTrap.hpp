/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 20:10:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap
{
	protected:
		std::string					_version;
		unsigned int				_maxHitPoints;
		unsigned int				_maxEnergyPoints;
		unsigned int				_armorDamageReduction;

		std::string					_name;
		unsigned int				_hitPoints;
		unsigned int				_energyPoints;
		unsigned int				_level;

		unsigned int				_meleeAttackDamage;
		unsigned int				_rangedAttackDamage;

	public:
		ClapTrap(std::string name, std::string version, int hp, int en, int mad, int rad, int adr);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &src);

		ClapTrap		&operator=(ClapTrap const &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		&getName(void);
		unsigned int	getMeleeAttackDamage(void);
		unsigned int	getRangedAttackDamage(void);
};

#endif
