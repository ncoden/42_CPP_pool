/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 08:02:25 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 08:36:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int			main(void)
{
	Sorcerer	gandalf("Gandalf", "Sorcerer");
	Victim		frodon("Frodon");
	Peon		peon("Pink Invisible Peon");

	std::cout << gandalf;
	std::cout << frodon;
	std::cout << peon;

	gandalf.polymorph(frodon);
	gandalf.polymorph(peon);
	return (0);
}
