/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/18 19:17:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		static int					_challenge_number;
		static std::string			_challenges[];

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &src);

		ScavTrap		&operator=(ScavTrap const &rhs);

		void			challengeNewcomer(std::string const &target);
};

#endif