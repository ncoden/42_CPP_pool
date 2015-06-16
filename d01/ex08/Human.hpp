/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:28:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 22:57:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <string>

using namespace std;

class Human
{
	private:
		static pair<string, void (Human::*)(string const &)>	_attacks[];
		static int												_attack_number;

		void		meleeAttack(string const &target);
		void		rangedAttack(string const &target);
		void		intimidatingShout(string const &target);

	public:
		string		name;

		Human(char const *name);
		~Human(void);
		void		action(string const &action_name, string const &target);
};

#endif
