/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:46:22 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 14:56:38 by mdarriga         ###   ########.fr       */
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