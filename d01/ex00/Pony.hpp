/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:29:02 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 11:02:17 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <string>

class Pony {
	public:
		Pony(std::string name, std::string colour);
		~Pony();

		std::string	getName(void);
		std::string	getColour(void);
		void		setName(std::string name);
		void		setColour(std::string colour);
	private:
		std::string _name;
		std::string _colour;
};

#endif