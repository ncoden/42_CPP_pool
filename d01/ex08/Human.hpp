/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:28:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 07:29:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>

struct t_attack;

class Human
{
	private:
		static t_attack		_attacks[];
		static int			_attack_number;

		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
		void		intimidatingShout(std::string const &target);

	public:
		std::string		name;

		Human(char const *name);
		~Human(void);
		void		action(std::string const &action_name, std::string const &target);
};

#endif
