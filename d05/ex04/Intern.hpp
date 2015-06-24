/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 23:55:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _H
# define _H

# include <string>
# include "Intern.hpp"
# include "Form.hpp"

class Intern
{
	public:
								Intern(void);
								~Intern(void);
								Intern(Intern const &src);
		Intern					&operator=(Intern const &rhs);

		Form					*makeForm(std::string const &name, std::string const &target);
};

#endif
