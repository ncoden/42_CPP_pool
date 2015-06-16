/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:28:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 23:21:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>

class Human
{
	private:
		static std::pair<std::string, void (Human::*)(std::string const &)>	_attacks[];
		static int															_attack_number;

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
