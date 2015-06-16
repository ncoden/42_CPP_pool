/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 21:44:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 23:00:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

using namespace std;

int				main(void)
{
	Human		stevej("Steve J.");
	Human		stevew("Steve W.");

	stevej.action("meleeAttack", "Micro$oft");
	stevej.action("rangedAttack", "Micro$oft");

	stevew.action("intimidatingShout", "Micro$oft");
}