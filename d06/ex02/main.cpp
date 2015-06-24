/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 20:59:53 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 21:33:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include "Base.hpp"

int					main(void)
{
	Base			*b = generate();

	identify_from_pointer(b);
	identify_from_reference(*b);
	return (0);
}
