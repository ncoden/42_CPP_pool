/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:46:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/16 20:00:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *ptr = &string;
	std::string &ref = string;

	std::cout << "Avec pointeur : " << *ptr << std::endl;
	std::cout << "Avec reference : " << ref << std::endl;
}