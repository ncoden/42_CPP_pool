/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:58:13 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 15:58:09 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		std::string	identify() const;
	private:
		std::string	_address;
};

#endif