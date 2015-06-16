/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:29:12 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 11:05:18 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony*	fluttershy = new Pony("fluttershy", "pink and yellow");
	std::cout << "Hi I am " << fluttershy->getName() << " and my fur is " << fluttershy->getColour() << std::endl;
	std::cout << "Now deleting ponyOnTheHeap" << std::endl;
	delete fluttershy;
}

void	ponyOnTheStack(void)
{
	Pony pinky_pie = Pony("pinky_pie", "pink");
	std::cout << "Hi I am " << pinky_pie.getName() << " and my fur is " << pinky_pie.getColour() << std::endl;
}

int		main()
{
	std::cout << "Calling ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap finished" << std::endl;
	std::cout << "Calling ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack finished" << std::endl;
	return(0);
}